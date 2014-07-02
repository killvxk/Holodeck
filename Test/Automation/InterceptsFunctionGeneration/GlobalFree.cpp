#include "common.h"


BOOL My_GlobalFree()
{
	HGLOBAL hMem=NULL;
	HGLOBAL returnVal_Real = NULL;
	HGLOBAL returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = GlobalFree (hMem);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = GlobalFree (hMem);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
