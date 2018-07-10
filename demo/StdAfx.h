// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#ifndef WINVER 
 #if _MSC_VER<1500
  #define WINVER  0x0400
 #else
  #define WINVER  0x0501
 #endif
#endif

//IE
#ifdef _WIN32_IE            // Allow use of features specific to IE 4.0 or later.
#undef _WIN32_IE
#endif
#define _WIN32_IE 0x0500    // Change this to the appropriate value to target IE 5.0 or later.

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
//#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows 95 Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT




