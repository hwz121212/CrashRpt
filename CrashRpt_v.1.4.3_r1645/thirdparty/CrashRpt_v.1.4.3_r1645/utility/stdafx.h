// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�


#include <atlbase.h>

// Support for VS2005 Express & SDK ATL
#if defined(_WTL_SUPPORT_SDK_ATL3) && !defined(_WTLSUP_INCLUDED)
#define _WTLSUP_INCLUDED
namespace ATL
{
	inline void * __stdcall __AllocStdCallThunk()
	{
		return ::HeapAlloc(::GetProcessHeap(), 0, sizeof(_stdcallthunk));
	}

	inline void __stdcall __FreeStdCallThunk(void *p)
	{
		::HeapFree(::GetProcessHeap(), 0, p);
	}
};
#endif // _WTL_SUPPORT_SDK_ATL3

#include <atlapp.h>
extern CAppModule _Module;
#include <atlwin.h>
// CString-related includes
#define _WTL_USE_CSTRING
#include <atlmisc.h>
#include <new.h>
#include <map>
#include <set>
#include <vector>
#include <stdlib.h>
#include <string>
#include <dbghelp.h>
#include <shlobj.h>
#include <Psapi.h>
#include <time.h>
#include <shellapi.h>
#include <signal.h>
#include <exception>
#include <sys/stat.h>
#include <psapi.h>
#include <rtcapi.h>

// Below are some macro definitions expanding into secured functions for newer versions of Visual C++
// and into insecure functions for old versions of Visual C++
#if _MSC_VER<1400
#define _TCSCPY_S(strDestination, numberOfElements, strSource) _tcscpy(strDestination, strSource)
#define WCSNCPY_S(strDest, sizeInBytes, strSource, count) wcsncpy(strDest, strSource, count)
#define STRCPY_S(strDestination, numberOfElements, strSource) strcpy(strDestination, strSource)
#else
#define _TCSCPY_S(strDestination, numberOfElements, strSource) _tcscpy_s(strDestination, numberOfElements, strSource)
#define WCSNCPY_S(strDest, sizeInBytes, strSource, count) wcsncpy_s(strDest, sizeInBytes, strSource, count)
#define STRCPY_S(strDestination, numberOfElements, strSource) strcpy_s(strDestination, numberOfElements, strSource)
#endif

#include "CrashRpt_lib.h"