/* Código 4 */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITb

void funcion1()
{
    int64_t * data;
   
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
      
        free(data);
    }
    if(5==5)
    {

        printLongLongLine(data[0]);

    }
}

#endif /* OMITb */

#ifndef OMITg


static void funcion2()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
         printLongLongLine(data[0]);
    }
}

static void funcion3()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(5==5)
    {
         printLongLongLine(data[0]);
    }
}

static void funcion4()
{
    int64_t * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(5==5)
    {
        
        printLongLongLine(data[0]);
    }
}

static void funcion5()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(5==5)
    {
        printLongLongLine(data[0]);
    }
}

void funcion6()
{
    funcion1();
    funcion2();
    funcion4();
    funcion5();
}

#endif /* OMITg */



#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITg

    funcion6();;
#endif /* OMITg */
#ifndef OMITb
    funcion1();
  
#endif /* OMITb */
    return 0;
}

#endif
