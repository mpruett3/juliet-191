/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_connect_socket_multiply_81_goodG2B.cpp
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-81_goodG2B.tmpl.cpp
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: connect_socket Read data using a connect socket (client side)
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an underflow before multiplying data by 2
 *    BadSink : If data is negative, multiply by 2, which can cause an underflow
 * Flow Variant: 81 Data flow: data passed in a parameter to an virtual method called via a reference
 *
 * */
