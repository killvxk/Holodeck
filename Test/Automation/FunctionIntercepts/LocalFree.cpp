#include "common.h"


BOOL My_LocalFree()
{
	HLOCAL hMem=NULL;
	HLOCAL returnVal_Real = NULL;
	HLOCAL returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	__try{
	disableInterception();
	returnVal_Real = LocalFree (hMem);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = LocalFree (hMem);
	error_Intercepted = GetLastError();
	}__except(puts("in filter"), 1){puts("exception caught");}
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
