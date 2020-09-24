/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_min_sub_11.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-11.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the minimum value for int
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: sub
 *    GoodSink: Ensure there will not be an underflow before subtracting 1 from data
 *    BadSink : Subtract 1 from data, which can cause an Underflow
 * Flow Variant: 11 Control flow: if(globalReturnsTrue()) and if(globalReturnsFalse())
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE191_Integer_Underflow__int_min_sub_11_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use the minimum value for this type */
        data = INT_MIN;
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int result = data - 1;
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
    CWE191_Integer_Underflow__int_min_sub_11_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

