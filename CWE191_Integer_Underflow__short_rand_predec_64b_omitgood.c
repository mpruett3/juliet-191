/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__short_rand_predec_64b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-64b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 64 Data flow: void pointer to data passed from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE191_Integer_Underflow__short_rand_predec_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    short * dataPtr = (short *)dataVoidPtr;
    /* dereference dataPtr into data */
    short data = (*dataPtr);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        short result = data;
        printIntLine(result);
    }
}

#endif /* OMITBAD */
