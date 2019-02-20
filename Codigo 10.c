/* Codigo 3 */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITb

void funcion1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
    
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        
        ; 
    }
}

#endif /* OMITb */

#ifndef OMITg

static void funcion2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
    
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
       
        printLine("Benign, fixed string");
    }
    else
    {

        free(data);
    }
}


static void funcion3()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        /* Initialize and make use of data */
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {

        free(data);
    }
}


static void funcion4()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        
        ; 
    }
}


static void funcion5()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        
        ; 
    }
}

void funcion6()
{
    funcion2();
    funcion3();
    funcion4();
    funcion5();
}

#endif /* OMITg */



#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    
    srand( (unsigned)time(NULL) );
#ifndef OMITg
  
    funcion6 ();

#endif /* OMITg */
#ifndef OMITb

    funcion1();

#endif /* OMITb */
    return 0;
}

#endif
