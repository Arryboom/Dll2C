// ExePrj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "#TargetDll#.h"

int _tmain(int argc, _TCHAR* argv[])
{
	#TargetDll#_Init();
	#TargetDll#_EntryPoint();

	return 0;
}