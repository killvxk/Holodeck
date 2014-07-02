#include "common.h"


BOOL My_LZRead()
{
	INT hFile=NULL;
	LPSTR lpBuffer=NULL;
	INT cbRead=NULL;
	INT returnVal_Real = NULL;
	INT returnVal_Intercepted = NULL;

	DWORD error_Real = 0;
	DWORD error_Intercepted = 0;
	__try{
	disableInterception();
	returnVal_Real = LZRead (hFile,lpBuffer,cbRead);
	error_Real = GetLastError();
	enableInterception();
	returnVal_Intercepted = LZRead (hFile,lpBuffer,cbRead);
	error_Intercepted = GetLastError();
	}__except(puts("in filter"), 1){puts("exception caught");}
	return ((returnVal_Real == returnVal_Intercepted) && (error_Real == error_Intercepted));
}
