/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int64_t_min_postdec_52b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-52b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for int64_t
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__int64_t_min_postdec_52c_badSink(int64_t data);

void CWE191_Integer_Underflow__int64_t_min_postdec_52b_badSink(int64_t data)
{
    CWE191_Integer_Underflow__int64_t_min_postdec_52c_badSink(data);
}

#endif /* OMITBAD */
