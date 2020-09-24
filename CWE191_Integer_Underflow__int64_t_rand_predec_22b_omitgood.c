/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int64_t_rand_predec_22b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-22b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the sink function */
extern int CWE191_Integer_Underflow__int64_t_rand_predec_22_badGlobal;

void CWE191_Integer_Underflow__int64_t_rand_predec_22_badSink(int64_t data)
{
    if(CWE191_Integer_Underflow__int64_t_rand_predec_22_badGlobal)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}

#endif /* OMITBAD */

