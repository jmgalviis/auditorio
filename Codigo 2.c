/* Codigo 2 */

#include "std_testcase.h"

#include <wchar.h>

#ifdef _WIN32
#define SNPRINTF _snwprintf
#else
#define SNPRINTF snprintf
#endif

#ifndef OMITb

void funcion1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(5==5)
    {
        
        wmemset(data, L'A', 100-1); /* fill with L'A's */
        data[100-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
    }
}

#endif /* OMITb */

#ifndef OMITg


static void funcion2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wmemset(data, L'A', 50-1); /* fill with L'A's */
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
    }
}

static void funcion2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(5==5)
    {
        wmemset(data, L'A', 50-1); /* fill with L'A's */
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
    }
}

void funcion4()
{
    funcion3();
    funcion4();
}

#endif /* OMITg */

/* Below is the main(). It is only used when building this testcase on
 * its own for testing or for building a binary to use in testing binary
 * analysis tools. It is not used when compiling all the testcases as one
 * application, which is how source code analysis tools are tested.
 */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITg
    
    funcion1();
#endif /* OMITg*/
#ifndef OMItb
    funcion4();
#endif /* OMITb */
    return 0;
}

#endif
