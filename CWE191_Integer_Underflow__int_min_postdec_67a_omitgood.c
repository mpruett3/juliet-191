/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_min_postdec_67a.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-67a.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: min Set data to the minimum value for int
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 67 Data flow: data passed in a struct from one function to another in different source files
 *
 * */

#include "std_testcase.h"

typedef struct _CWE191_Integer_Underflow__int_min_postdec_67_structType
{
    int structFirst;
} CWE191_Integer_Underflow__int_min_postdec_67_structType;

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__int_min_postdec_67b_badSink(CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct);

void CWE191_Integer_Underflow__int_min_postdec_67_bad()
{
    int data;
    CWE191_Integer_Underflow__int_min_postdec_67_structType myStruct;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    myStruct.structFirst = data;
    CWE191_Integer_Underflow__int_min_postdec_67b_badSink(myStruct);
}

#endif /* OMITBAD */


/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */


int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE191_Integer_Underflow__int_min_postdec_67_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

