/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int64_t_min_postdec_41.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-41.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for int64_t
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 41 Data flow: data passed as an argument from one function to another in the same source file
 *
 * */

#include "std_testcase.h"


#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
static void goodG2BSink(int64_t data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}

static void goodG2B()
{
    int64_t data;
    data = 0LL;
    /* FIX: Use a small, non-zero value that will not cause an underflow in the sinks */
    data = -2;
    goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
static void goodB2GSink(int64_t data)
{
    /* FIX: Add a check to prevent an underflow from occurring */
    if (data > LLONG_MIN)
    {
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

static void goodB2G()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = LLONG_MIN;
    goodB2GSink(data);
}

void CWE191_Integer_Underflow__int64_t_min_postdec_41_good()
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
    CWE191_Integer_Underflow__int64_t_min_postdec_41_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
    return 0;
}
