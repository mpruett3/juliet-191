/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__unsigned_int_min_predec_63a.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-63a.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for unsigned int
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 63 Data flow: pointer to data passed from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__unsigned_int_min_predec_63b_badSink(unsigned int * dataPtr);

void CWE191_Integer_Underflow__unsigned_int_min_predec_63_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = 0;
    CWE191_Integer_Underflow__unsigned_int_min_predec_63b_badSink(&data);
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
    CWE191_Integer_Underflow__unsigned_int_min_predec_63_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

