/* Codigo 8 */

#include "std_testcase.h"

#include <wchar.h>


{

#ifndef OMITb

void funcion1()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    data = new twoIntsStruct[100];
    
    delete [] data;
    delete [] data;
}

#endif /* OMITb */

#ifndef OMITg


static void funcion2()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;
}

static void funcion3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;


void funcion4()
{
    funcion2();
    funcion3();
}

#endif /* OMITg */

} 



#ifdef INCLUDEMAIN


int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITg

    funcion4();

#endif /* OMITg */
#ifndef OMITb
    funcion1 ();

#endif /* OMITb */
    return 0;
}

#endif
