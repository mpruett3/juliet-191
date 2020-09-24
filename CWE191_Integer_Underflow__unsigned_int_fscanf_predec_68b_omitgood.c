/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

extern unsigned int CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_badData;
extern unsigned int CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodG2BData;
extern unsigned int CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_goodB2GData;

#ifndef OMITBAD

void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68b_badSink()
{
    unsigned int data = CWE191_Integer_Underflow__unsigned_int_fscanf_predec_68_badData;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

#endif /* OMITBAD */

