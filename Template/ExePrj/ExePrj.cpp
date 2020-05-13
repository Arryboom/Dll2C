// ExePrj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "#TargetDll#.h"

int _tmain(int argc, _TCHAR* argv[])
{
	/* Invoke the generated code, just like invoke the DLL. */
	#TargetDll#_Init();
	#TargetDll#_LoadLibrary();

	/* 
		Here you can call #TargetDll#_GetProcAddress to get the addresses of exported functions. 

		Example:
		void (*fTestFun)(LPCSTR);
		*(FARPROC*)&fTestFun = Win32Dll_GetProcAddress("TestFun");
		fTestFun("Hello World!");
	*/

	#TargetDll#_FreeLibrary();

	return 0;
}