/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__char_rand_postdec_66a.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-66a.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 66 Data flow: data passed in an array from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__char_rand_postdec_66b_badSink(char dataArray[]);

void CWE191_Integer_Underflow__char_rand_postdec_66_bad()
{
    char data;
    char dataArray[5];
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE191_Integer_Underflow__char_rand_postdec_66b_badSink(dataArray);
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
    CWE191_Integer_Underflow__char_rand_postdec_66_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

