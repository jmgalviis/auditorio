/* Codigo 3 */

#include "std_testcase.h"

#ifdef _WIN32
#include <winsock2.h>
#include <windows.h>
#include <direct.h>
#pragma comment(lib, "ws2_32") /* include ws2_32.lib when linking */
#define CLOSE_SOCKET closesocket
#else /* NOT _WIN32 */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define CLOSE_SOCKET close
#define SOCKET int
#endif

#define TCP_PORT 27015
#define IP_ADDRESS "127.0.0.1"
#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)


static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

#ifndef OMITb

void funcion1()
{
    int data;

    data = -1;
    if(STATIC_CONST_TRUE)
    {
        {
#ifdef _WIN32
            WSADATA wsaData;
            int wsaDataInit = 0;
#endif
            int recvResult;
            struct sockaddr_in service;
            SOCKET connectSocket = INVALID_SOCKET;
            char inputBuffer[CHAR_ARRAY_SIZE];
            do
            {
#ifdef _WIN32
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
#endif
           
                connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (connectSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
	                service.sin_family = AF_INET;
                service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
                service.sin_port = htons(TCP_PORT);
                if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                
                recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
                if (recvResult == SOCKET_ERROR || recvResult == 0)
                {
                    break;
                }
                inputBuffer[recvResult] = '\0';
                data = atoi(inputBuffer);
            }
            while (0);
            if (connectSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(connectSocket);
            }
#ifdef _WIN32
            if (wsaDataInit)
            {
                WSACleanup();
            }
#endif
        }
    }
    {
        size_t i;
        int *intPointer;
       
        intPointer = (int*)malloc(data * sizeof(int));
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}

#endif /* OMITb */

#ifndef OMITg

static void funcion2()
{
    int data;
  
    data = -1;
    if(STATIC_CONST_FALSE)
    {
        
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    {
        size_t i;
        int *intPointer;
        
        intPointer = (int*)malloc(data * sizeof(int));
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; /
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}

static void funcion3()
{
    int data;
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        data = 20;
    }
    {
        size_t i;
        int *intPointer;
        
        intPointer = (int*)malloc(data * sizeof(int));
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        free(intPointer);
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
#ifndef OMITg
   
    funcion4();
    
#endif /* OMITg */
#ifndef OMITb
    funcion1();
  
#endif /* OMITb */
    return 0;
}

#endif
