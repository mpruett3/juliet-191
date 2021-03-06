/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_min_postdec_13.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-13.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the minimum value for int
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 13 Control flow: if(GLOBAL_CONST_FIVE==5) and if(GLOBAL_CONST_FIVE!=5)
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE191_Integer_Underflow__int_min_postdec_13_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int result = data;
            printIntLine(result);
        }
    }
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
    CWE191_Integer_Underflow__int_min_postdec_13_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

