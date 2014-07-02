#include "common.h"


BOOL My_FatalExit()
{
	int ExitCode=NULL;
	
	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	FatalExit (ExitCode);
	error_Real = GetLastError();
	enableInterception();
	FatalExit (ExitCode);
	error_Intercepted = GetLastError();
	return (error_Real == error_Intercepted);
}
