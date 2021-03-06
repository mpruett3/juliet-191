/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

extern int64_t CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_badData;
extern int64_t CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodG2BData;
extern int64_t CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_goodB2GData;

#ifndef OMITBAD

void CWE191_Integer_Underflow__int64_t_fscanf_multiply_68b_badSink()
{
    int64_t data = CWE191_Integer_Underflow__int64_t_fscanf_multiply_68_badData;
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < LLONG_MIN, this will underflow */
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}

#endif /* OMITBAD */

