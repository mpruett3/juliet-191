/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-65b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 65 Data/control flow: data passed as an argument from one function to a function in a different source file called via a function pointer
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_65b_badSink(unsigned int data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

#endif /* OMITBAD */

