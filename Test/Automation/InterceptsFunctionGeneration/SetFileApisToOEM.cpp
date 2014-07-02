#include "common.h"


BOOL My_SetFileApisToOEM()
{
	
	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	SetFileApisToOEM ();
	error_Real = GetLastError();
	enableInterception();
	SetFileApisToOEM ();
	error_Intercepted = GetLastError();
	return (error_Real == error_Intercepted);
}
