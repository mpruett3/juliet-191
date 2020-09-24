/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_fgets_sub_54b.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-54b.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: sub
 *    GoodSink: Ensure there will not be an underflow before subtracting 1 from data
 *    BadSink : Subtract 1 from data, which can cause an Underflow
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)


#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE191_Integer_Underflow__int_fgets_sub_54c_goodG2BSink(int data);

void CWE191_Integer_Underflow__int_fgets_sub_54b_goodG2BSink(int data)
{
    CWE191_Integer_Underflow__int_fgets_sub_54c_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE191_Integer_Underflow__int_fgets_sub_54c_goodB2GSink(int data);

void CWE191_Integer_Underflow__int_fgets_sub_54b_goodB2GSink(int data)
{
    CWE191_Integer_Underflow__int_fgets_sub_54c_goodB2GSink(data);
}

#endif /* OMITGOOD */