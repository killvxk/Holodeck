#include "common.h"


BOOL My_DnsHostnameToComputerNameW()
{
	LPCWSTR Hostname=NULL;
	LPWSTR ComputerName=NULL;
	LPDWORD nSize=NULL;
	BOOL returnVal_Real = NULL;
	BOOL returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	__try{
	disableInterception();
	returnVal_Real = DnsHostnameToComputerNameW (Hostname,ComputerName,nSize);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = DnsHostnameToComputerNameW (Hostname,ComputerName,nSize);
	error_Intercepted = GetLastError();
	}__except(puts("in filter"), 1){puts("exception caught");}
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
