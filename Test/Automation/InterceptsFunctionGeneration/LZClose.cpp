#include "common.h"


BOOL My_LZClose()
{
	INT hFile=NULL;
	
	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	LZClose (hFile);
	error_Real = GetLastError();
	enableInterception();
	LZClose (hFile);
	error_Intercepted = GetLastError();
	return (error_Real == error_Intercepted);
}
