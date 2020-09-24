/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_min_multiply_42.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-42.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the minimum value for int
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 42 Data flow: data returned from one function to another in the same source file
 *
 * */

#include "std_testcase.h"


#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
static int goodG2BSource(int data)
{
    /* FIX: Use a small, non-zero value that will not cause an integer underflow in the sinks */
    data = -2;
    return data;
}

static void goodG2B()
{
    int data;
    /* Initialize data */
    data = 0;
    data = goodG2BSource(data);
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
        int result = data * 2;
        printIntLine(result);
    }
}

/* goodB2G uses the BadSource with the GoodSink */
static int goodB2GSource(int data)
{
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    return data;
}

static void goodB2G()
{
    int data;
    /* Initialize data */
    data = 0;
    data = goodB2GSource(data);
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* FIX: Add a check to prevent an underflow from occurring */
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}

void CWE191_Integer_Underflow__int_min_multiply_42_good()
{
    goodB2G();
    goodG2B();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */


int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE191_Integer_Underflow__int_min_multiply_42_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
    return 0;
}

