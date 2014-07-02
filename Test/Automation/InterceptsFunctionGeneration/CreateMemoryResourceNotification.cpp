#include "common.h"


BOOL My_CreateMemoryResourceNotification()
{
	MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType;
	HANDLE returnVal_Real = NULL;
	HANDLE returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	disableInterception();
	returnVal_Real = CreateMemoryResourceNotification (NotificationType);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = CreateMemoryResourceNotification (NotificationType);
	error_Intercepted = GetLastError();
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}