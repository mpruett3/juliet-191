/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__char_fscanf_postdec_68a.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-68a.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

char CWE191_Integer_Underflow__char_fscanf_postdec_68_badData;
char CWE191_Integer_Underflow__char_fscanf_postdec_68_goodG2BData;
char CWE191_Integer_Underflow__char_fscanf_postdec_68_goodB2GData;

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__char_fscanf_postdec_68b_badSink();

void CWE191_Integer_Underflow__char_fscanf_postdec_68_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%c", &data);
    CWE191_Integer_Underflow__char_fscanf_postdec_68_badData = data;
    CWE191_Integer_Underflow__char_fscanf_postdec_68b_badSink();
}

#endif /* OMITBAD */


/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */


int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE191_Integer_Underflow__char_fscanf_postdec_68_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

