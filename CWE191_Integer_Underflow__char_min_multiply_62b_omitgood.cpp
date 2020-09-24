/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__char_min_multiply_62b.cpp
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-62b.tmpl.cpp
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for char
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 62 Data flow: data flows using a C++ reference from one function to another in different source files
 *
 * */

#include "std_testcase.h"

namespace CWE191_Integer_Underflow__char_min_multiply_62
{

#ifndef OMITBAD

void badSource(char &data)
{
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = CHAR_MIN;
}

#endif /* OMITBAD */


} /* close namespace */
