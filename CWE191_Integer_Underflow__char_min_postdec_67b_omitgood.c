/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__char_min_postdec_67b.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-67b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the min value for char
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 67 Data flow: data passed in a struct from one function to another in different source files
 *
 * */

#include "std_testcase.h"

typedef struct _CWE191_Integer_Underflow__char_min_postdec_67_structType
{
    char structFirst;
} CWE191_Integer_Underflow__char_min_postdec_67_structType;

#ifndef OMITBAD

void CWE191_Integer_Underflow__char_min_postdec_67b_badSink(CWE191_Integer_Underflow__char_min_postdec_67_structType myStruct)
{
    char data = myStruct.structFirst;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        char result = data;
        printHexCharLine(result);
    }
}

#endif /* OMITBAD */

