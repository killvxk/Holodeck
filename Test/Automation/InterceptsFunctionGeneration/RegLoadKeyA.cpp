#include "common.h"


BOOL My_RegLoadKeyA()
{
	HKEY hKey=NULL;
	LPCSTR lpSubKey=NULL;
	LPCSTR lpFile=NULL;
	LONG returnVal_Real = NULL;
	LONG returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = RegLoadKeyA (hKey,lpSubKey,lpFile);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = RegLoadKeyA (hKey,lpSubKey,lpFile);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
