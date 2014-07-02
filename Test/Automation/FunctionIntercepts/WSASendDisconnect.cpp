#include "common.h"


BOOL My_WSASendDisconnect()
{
	SOCKET s=NULL;
	LPWSABUF lpOutboundDisconnectData=NULL;
	int returnVal_Real = NULL;
	int returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	__try{
	disableInterception();
	returnVal_Real = WSASendDisconnect (s,lpOutboundDisconnectData);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = WSASendDisconnect (s,lpOutboundDisconnectData);
	error_Intercepted = GetLastError();
	}__except(puts("in filter"), 1){puts("exception caught");}
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
