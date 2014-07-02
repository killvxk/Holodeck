#include "common.h"


BOOL My_GlobalMemoryStatus()
{
	LPMEMORYSTATUS lpBuffer=NULL;
	
	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	__try{
	disableInterception();
	GlobalMemoryStatus (lpBuffer);
	error_Real = GetLastError();
	enableInterception();
	GlobalMemoryStatus (lpBuffer);
	error_Intercepted = GetLastError();
	}__except(puts("in filter"), 1){puts("exception caught");}
	return (error_Real == error_Intercepted);
}
