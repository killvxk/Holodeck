#include "common.h"


BOOL My_RegUnLoadKeyA()
{
	HKEY hKey=NULL;
	LPCSTR lpSubKey=NULL;
	LONG returnVal_Real = NULL;
	LONG returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = RegUnLoadKeyA (hKey,lpSubKey);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = RegUnLoadKeyA (hKey,lpSubKey);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
