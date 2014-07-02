#include "common.h"


BOOL My_gethostbyname()
{
	const char FAR * name=NULL;
	struct hostent FAR * returnVal_Real = NULL;
	struct hostent FAR * returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = gethostbyname (name);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = gethostbyname (name);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
