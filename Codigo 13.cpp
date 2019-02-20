/* Codigo 13 */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

#define ENV_VARIABLE L"ADD"

#ifdef _WIN32
#define GETENV _wgetenv
#else
#define GETENV getenv
#endif

#include <fstream>

#ifndef OMITb

void funcion1()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    if(globalTrue)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, FILENAME_MAX-dataLen-1);
            }
        }
    }
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}

#endif /* OMITb */

#ifndef OMITg

static void funcion2()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
#ifdef _WIN32
        wcscat(data, L"c:\\temp\\file.txt");
#else
        wcscat(data, L"/tmp/file.txt");
#endif
    }
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}

static void funcion3()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    if(globalTrue)
    {
#ifdef _WIN32
        wcscat(data, L"c:\\temp\\file.txt");
#else
        wcscat(data, L"/tmp/file.txt");
#endif
    }
    {
        ifstream inputFile;
        inputFile.open((char *)data);
        inputFile.close();
    }
}

void funcion4()
{
    funcion2();
    funcion3();
}

#endif /* OMITGOOD */



#ifdef INCLUDEMAIN


int main(int argc, char * argv[])
{

    srand( (unsigned)time(NULL) );
#ifndef OMITg

    funcion3();
   
#endif /* OMITg */
#ifndef OMITb
  
    funcion1 ();

	
#endif /* OMITb */
    return 0;
}

#endif
