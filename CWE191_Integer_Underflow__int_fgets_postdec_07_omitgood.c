/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE191_Integer_Underflow__int_fgets_postdec_07.c
Label Definition File: CWE191_Integer_Underflow__int.label.xml
Template File: sources-sinks-07.tmpl.c
*/
/*
 * @description
 * CWE: 191 Integer Underflow
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Set data to a small, non-zero number (negative two)
 * Sinks: decrement
 *    GoodSink: Ensure there will not be an underflow before decrementing data
 *    BadSink : Decrement data, which can cause an Underflow
 * Flow Variant: 07 Control flow: if(staticFive==5) and if(staticFive!=5)
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

/* The variable below is not declared "const", but is never assigned
   any other value so a tool should be able to identify that reads of
   this will always give its initialized value. */
static int staticFive = 5;

#ifndef OMITBAD

void CWE191_Integer_Underflow__int_fgets_postdec_07_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticFive==5)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE] = "";
            /* POTENTIAL FLAW: Read data from the console using fgets() */
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                /* Convert to int */
                data = atoi(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int result = data;
            printIntLine(result);
        }
    }
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
    CWE191_Integer_Underflow__int_fgets_postdec_07_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

