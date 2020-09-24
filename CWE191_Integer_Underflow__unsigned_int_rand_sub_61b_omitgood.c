/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__unsigned_int_rand_sub_61b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-61b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: sub
 *    GoodSink: Ensure there will not be an underflow before subtracting 1 from data
 *    BadSink : Subtract 1 from data, which can cause an Underflow
 * Flow Variant: 61 Data flow: data returned from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

unsigned int CWE191_Integer_Underflow__unsigned_int_rand_sub_61b_badSource(unsigned int data)
{
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    return data;
}

#endif /* OMITBAD */
