#pragma once

#include <vector>

#ifdef _WIN32
#if defined(_MSC_VER) && !defined(graphyQMLEngineLib_STATIC)
#ifdef graphyQMLEngineLib_EXPORTS
#define GRAPHYQMLENGINE_API __declspec(dllexport)
#else
#define GRAPHYQMLENGINE_API __declspec(dllimport)
#endif
#else
#define GRAPHYQMLENGINE_API
#endif
#endif

namespace graphyQMLEngine
{
#ifdef _WIN32
	GRAPHYQMLENGINE_API long _stdcall test();
#elif linux
	long test();
#endif
}
