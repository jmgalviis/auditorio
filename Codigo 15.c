/* Codigo 5 */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

void funcion1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    if(globalFive==5)
    {
      
        data = dataBuffer - 8;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
    }
}

#endif /* OMITb */

#ifndef OMITb

static void funcion2()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataBuffer;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        strcpy(data, source);
        printLine(data);
    }
}

static void funcion3()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    if(globalFive==5)
    {
        data = dataBuffer;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
    }
}

void funcion4 ()
{
    funcion2();
    funcion3();
}

#endif /* OMITg */



#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
 
    srand( (unsigned)time(NULL) );
#ifndef OMITg

    funcion4();
 
#endif /* OMITg */
#ifndef OMITb

     funcion1();

#endif /* OMITb */
    return 0;
}

#endif
