/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__unsigned_int_rand_predec_67a.c
Label Definition File: CWE191_Integer_Underflow.label.xml
Template File: sources-sinks-67a.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 67 Data flow: data passed in a struct from one function to another in different source files
 *
 * */

#include "std_testcase.h"

typedef struct _CWE191_Integer_Underflow__unsigned_int_rand_predec_67_structType
{
    unsigned int structFirst;
} CWE191_Integer_Underflow__unsigned_int_rand_predec_67_structType;

#ifndef OMITBAD

/* bad function declaration */
void CWE191_Integer_Underflow__unsigned_int_rand_predec_67b_badSink(CWE191_Integer_Underflow__unsigned_int_rand_predec_67_structType myStruct);

void CWE191_Integer_Underflow__unsigned_int_rand_predec_67_bad()
{
    unsigned int data;
    CWE191_Integer_Underflow__unsigned_int_rand_predec_67_structType myStruct;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    myStruct.structFirst = data;
    CWE191_Integer_Underflow__unsigned_int_rand_predec_67b_badSink(myStruct);
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
    CWE191_Integer_Underflow__unsigned_int_rand_predec_67_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

