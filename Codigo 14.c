/* Codigo 14 */

#include "std_testcase.h"

#ifndef OMITb

void funcion1 ()
{
    if(5==5)
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
          
            if ((twoIntsStructPointer != NULL) & (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
    }
}

#endif /* OMITb */

#ifndef OMITg

static void funcion2()
{
    if(5!=5)
    {
       
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
          
            if ((twoIntsStructPointer != NULL) && (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
    }
}


static void funcion3()
{
    if(5==5)
    {
        {
            twoIntsStruct *twoIntsStructPointer = NULL;
           
            if ((twoIntsStructPointer != NULL) && (twoIntsStructPointer->intOne == 5))
            {
                printLine("intOne == 5");
            }
        }
    }
}

void funcion4()
{
    funcion2();
    funcion3();
}

#endif /* OMITg */



#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{

    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD

    funcion4();

#endif /* OMITg */
#ifndef OMITb
    
   funcion1();

#endif /* OMITb */
    return 0;
}

#endif
