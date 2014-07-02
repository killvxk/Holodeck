#include "common.h"


BOOL My_GetSystemWindowsDirectoryA()
{
	LPSTR lpBuffer=NULL;
	UINT uSize=NULL;
	UINT returnVal_Real = NULL;
	UINT returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = GetSystemWindowsDirectoryA (lpBuffer,uSize);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = GetSystemWindowsDirectoryA (lpBuffer,uSize);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
