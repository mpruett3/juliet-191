/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__char_min_multiply_81a.cpp
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-81a.tmpl.cpp
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for char
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */

#include "std_testcase.h"
#include "CWE191_Integer_Underflow__char_min_multiply_81.h"

namespace CWE191_Integer_Underflow__char_min_multiply_81
{

#ifndef OMITBAD

void bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = CHAR_MIN;
    const CWE191_Integer_Underflow__char_min_multiply_81_base& baseObject = CWE191_Integer_Underflow__char_min_multiply_81_bad();
    baseObject.action(data);
}

#endif /* OMITBAD */


} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */


using namespace CWE191_Integer_Underflow__char_min_multiply_81; /* so that we can use good and bad easily */

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITBAD
    printLine("Calling bad()...");
    bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

