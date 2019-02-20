/*Codigo7 */

#include "std_testcase.h"

#include <windows.h>
#include <wincrypt.h>
#pragma comment(lib, "advapi32.lib")


static int staticFive = 5;

#ifndef OMITb

void funcion1()
{
    if(staticFive==5)
    {

            int data = rand();
            printIntLine(data);
        }
    }
}

#endif /* OMITb */

#ifndef OMITg


static void funcion2()
{
    if(staticFive!=5)
    {
      
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HCRYPTPROV hCryptProv;
            int data;
            if (!CryptAcquireContextW(&hCryptProv, 0, 0, PROV_RSA_FULL, 0))
            {
                exit(1);
            }
            if (!CryptGenRandom(hCryptProv, sizeof(data), (BYTE *) &data))
            {
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            printIntLine(data);
        }
    }
}

static void funcion3()
{
    if(staticFive==5)
    {
        {
            HCRYPTPROV hCryptProv;
            int data;
            if (!CryptAcquireContextW(&hCryptProv, 0, 0, PROV_RSA_FULL, 0))
            {
                exit(1);
            }
            if (!CryptGenRandom(hCryptProv, sizeof(data), (BYTE *) &data))
            {
                CryptReleaseContext(hCryptProv, 0);
                exit(1);
            }
            if (hCryptProv)
            {
                CryptReleaseContext(hCryptProv, 0);
            }
            printIntLine(data);
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
    /* seed randomness */
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
