//*************************************************************************
// Copyright (C) Security Innovation, LLC, 2002-2004  All Rights Reserved.
//
// FILE:		MsvCrtReplacementLibrary.h
//
// DESCRIPTION: Contains replacement library prototypes for msvcrt.dll
//
//=========================================================================
// Modification History
//
// Generated 05/04/2004 04:51:58 PM
//*************************************************************************
#pragma once

#define _WIN32_WINNT 0x0501

#include <windows.h>
#include "Registry.h"
#include "ReplacementLibrary.h"
#include "Log.h"

using namespace Replacement;
using namespace Log;

// function pointer definitions
typedef _CRTIMP void * (__cdecl *memcpyFunction)(void *, const void *, size_t);
typedef _CRTIMP char * (__cdecl *strcpyFunction)(char *, const char *);
typedef _CRTIMP wchar_t * (__cdecl *wcscpyFunction)(wchar_t *, const wchar_t *);
typedef _CRTIMP unsigned char * (__cdecl *_mbscpyFunction)(unsigned char *, const unsigned char *);
typedef _CRTIMP char * (__cdecl *strcatFunction)(char *, const char *);
typedef _CRTIMP wchar_t * (__cdecl *wcscatFunction)(wchar_t *, const wchar_t *);
typedef _CRTIMP unsigned char * (__cdecl *_mbscatFunction)(unsigned char *, const unsigned char *);
typedef _CRTIMP char * (__cdecl *strncpyFunction)(char *, const char *, size_t);
typedef _CRTIMP wchar_t * (__cdecl *wcsncpyFunction)(wchar_t *, const wchar_t *, size_t);
typedef _CRTIMP char * (__cdecl *_tcsncpyFunction)(char *, const char *, size_t);
typedef _CRTIMP unsigned char * (__cdecl *_mbsnbcpyFunction)(unsigned char *, const unsigned char *, size_t);
typedef _CRTIMP char * (__cdecl *strncatFunction)(char *, const char *, SIZE_T);
typedef _CRTIMP wchar_t * (__cdecl *wcsncatFunction)(wchar_t *, const wchar_t *, SIZE_T);
typedef _CRTIMP char * (__cdecl *_tcsncatFunction)(char *, const char *, SIZE_T);
typedef _CRTIMP unsigned char * (__cdecl *_mbsnbcatFunction)(unsigned char *, const unsigned char *, SIZE_T);
typedef _CRTIMP size_t (__cdecl *strlenFunction)(const char *);
typedef _CRTIMP size_t (__cdecl *_mbslenFunction)(const unsigned char *);
typedef _CRTIMP char * (__cdecl *getsFunction)(char *);

// original function pointers
memcpyFunction realmemcpy = NULL;
strcpyFunction realstrcpy = NULL;
wcscpyFunction realwcscpy = NULL;
_mbscpyFunction real_mbscpy = NULL;
strcatFunction realstrcat = NULL;
wcscatFunction realwcscat = NULL;
_mbscatFunction real_mbscat = NULL;
strncpyFunction realstrncpy = NULL;
wcsncpyFunction realwcsncpy = NULL;
_tcsncpyFunction real_tcsncpy = NULL;
_mbsnbcpyFunction real_mbsnbcpy = NULL;
strncatFunction realstrncat = NULL;
wcsncatFunction realwcsncat = NULL;
_tcsncatFunction real_tcsncat = NULL;
_mbsnbcatFunction real_mbsnbcat = NULL;
strlenFunction realstrlen = NULL;
_mbslenFunction real_mbslen = NULL;
getsFunction realgets = NULL;

ReplacementLibrary *library = NULL;
LogSender *logSender = NULL;
