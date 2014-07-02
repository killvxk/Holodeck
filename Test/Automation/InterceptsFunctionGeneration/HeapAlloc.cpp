#include "common.h"


BOOL My_HeapAlloc()
{
	HANDLE hHeap=NULL;
	DWORD dwFlags=NULL;
	SIZE_T dwBytes=NULL;
	LPVOID returnVal_Real = NULL;
	LPVOID returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = HeapAlloc (hHeap,dwFlags,dwBytes);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = HeapAlloc (hHeap,dwFlags,dwBytes);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
