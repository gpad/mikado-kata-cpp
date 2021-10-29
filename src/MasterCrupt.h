#pragma once

#if defined(WIN32)

#ifdef MASTERCRUPT_EXPORTS
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

#else

#define DLL_EXPORT

#endif // WIN32
