/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_fscanf_multiply_65a.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-65a.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 65 Data/control flow: data passed as an argument from one function to a function in a different source file called via a function pointer
 *
 * */

#include "std_testcase.h"


#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodG2BSink(int data);

static void goodG2B()
{
    int data;
    void (*funcPtr) (int) = CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodG2BSink;
    /* Initialize data */
    data = 0;
    /* FIX: Use a small, non-zero value that will not cause an integer underflow in the sinks */
    data = -2;
    funcPtr(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodB2GSink(int data);

static void goodB2G()
{
    int data;
    void (*funcPtr) (int) = CWE191_Integer_Underflow__int_fscanf_multiply_65b_goodB2GSink;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    funcPtr(data);
}

void CWE191_Integer_Underflow__int_fscanf_multiply_65_good()
{
    goodG2B();
    goodB2G();
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
    CWE191_Integer_Underflow__int_fscanf_multiply_65_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
    return 0;
}

