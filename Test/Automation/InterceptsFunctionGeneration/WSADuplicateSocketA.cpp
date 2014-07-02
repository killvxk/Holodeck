#include "common.h"


BOOL My_WSADuplicateSocketA()
{
	SOCKET s=NULL;
	DWORD dwProcessId=NULL;
	LPWSAPROTOCOL_INFOA lpProtocolInfo=NULL;
	int returnVal_Real = NULL;
	int returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = WSADuplicateSocketA (s,dwProcessId,lpProtocolInfo);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = WSADuplicateSocketA (s,dwProcessId,lpProtocolInfo);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
