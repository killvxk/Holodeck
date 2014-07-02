#include "common.h"


BOOL My_RegOpenCurrentUser()
{
	REGSAM samDesired=NULL;
	PHKEY phkResult=NULL;
	LONG returnVal_Real = NULL;
	LONG returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = RegOpenCurrentUser (samDesired,phkResult);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = RegOpenCurrentUser (samDesired,phkResult);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
