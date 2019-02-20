/* Codigo 9 */

#include "std_testcase.h"

#ifndef OMITb

void funcion1()
{
    int data;

    data = -1;
    goto source;
source:

    data = -1;

    if (data < 100)
    {
    
        char * dataBuffer = (char *)malloc(data);

        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}

#endif /* OMITb */

#ifndef OMITg


static void funcion2()
{
    int data;

    data = -1;
    goto source;
source:
  
    data = 100-1;

    if (data < 100)
    {
      
        char * dataBuffer = (char *)malloc(data);
 
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}

void funcion3()
{
  funcion2();
}

#endif /* OMITg */



#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITg
   
    funcion3();

#endif /* OMITGOOD */
#ifndef OMITb

    funcion3();

#endif /* OMITb */
    return 0;
}

#endif
