/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_fgets_sub_68b.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: sub
 *    GoodSink: Ensure there will not be an underflow before subtracting 1 from data
 *    BadSink : Subtract 1 from data, which can cause an Underflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

extern int CWE191_Integer_Underflow__int_fgets_sub_68_badData;
extern int CWE191_Integer_Underflow__int_fgets_sub_68_goodG2BData;
extern int CWE191_Integer_Underflow__int_fgets_sub_68_goodB2GData;

#ifndef OMITBAD

void CWE191_Integer_Underflow__int_fgets_sub_68b_badSink()
{
    int data = CWE191_Integer_Underflow__int_fgets_sub_68_badData;
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int result = data - 1;
        printIntLine(result);
    }
}

#endif /* OMITBAD */

