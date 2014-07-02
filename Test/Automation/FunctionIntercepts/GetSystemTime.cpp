#include "common.h"


BOOL My_GetSystemTime()
{
	LPSYSTEMTIME lpSystemTime=NULL;
	
	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	__try{
	disableInterception();
	GetSystemTime (lpSystemTime);
	error_Real = GetLastError();
	enableInterception();
	GetSystemTime (lpSystemTime);
	error_Intercepted = GetLastError();
	}__except(puts("in filter"), 1){puts("exception caught");}
	return (error_Real == error_Intercepted);
}
