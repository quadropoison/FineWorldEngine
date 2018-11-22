#pragma once

#ifdef FWE_PLATFORM_WINDOWS
	#ifdef FWE_BUILD_DLL
		#define	FWE_API __declspec(dllexport)
	#else
		#define	FWE_API __declspec(dllimport)
	#endif 
#else
	#error This OS does not supported yet
#endif
