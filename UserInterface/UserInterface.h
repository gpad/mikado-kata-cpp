#pragma once

#ifdef USERINTERFACE_EXPORTS
#define DLL_EXPORT __declspec( dllexport )
#else
#define DLL_EXPORT __declspec(dllimport) 
#endif