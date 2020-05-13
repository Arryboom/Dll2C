// TestWin32Dll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Win32Dll.h"

int _tmain(int argc, _TCHAR* argv[])
{
	/* Invoke the generated code, just like invoke the DLL. */
	Win32Dll_Init();
	Win32Dll_LoadLibrary();

	void (*fTestFun)(LPCSTR);
	*(FARPROC*)&fTestFun = Win32Dll_GetProcAddress("TestFun");
	fTestFun("Hello World!");

	Win32Dll_FreeLibrary();

	return 0;
}