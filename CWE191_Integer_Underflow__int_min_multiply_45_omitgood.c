/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_min_multiply_45.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-45.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the minimum value for int
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 45 Data flow: data passed as a static global variable from one function to another in the same source file
 *
 * */

#include "std_testcase.h"

static int CWE191_Integer_Underflow__int_min_multiply_45_badData;
static int CWE191_Integer_Underflow__int_min_multiply_45_goodG2BData;
static int CWE191_Integer_Underflow__int_min_multiply_45_goodB2GData;

#ifndef OMITBAD

static void badSink()
{
    int data = CWE191_Integer_Underflow__int_min_multiply_45_badData;
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
        int result = data * 2;
        printIntLine(result);
    }
}

void CWE191_Integer_Underflow__int_min_multiply_45_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    CWE191_Integer_Underflow__int_min_multiply_45_badData = data;
    badSink();
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
    CWE191_Integer_Underflow__int_min_multiply_45_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

