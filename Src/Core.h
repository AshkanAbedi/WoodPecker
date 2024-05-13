#pragma once

#ifdef WP_PLATFORM_WINDOWS
	#ifdef WP_BUILD_DLL
		#define WOODPECKER_API __declspec(dllexport)
	#else
		#define WOODPECKER_API __declspec(dllimport)
	#endif
#else 
	#error WoodPecker only supports Windows!
#endif