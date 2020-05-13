// ExePrj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "#TargetDll#.h"

#TlsValues#

int _tmain(int argc, _TCHAR* argv[])
{
	/* Make sure the TLS values will not be optimized and removed by the compiler. */
	#UseTlsValues#

	#TargetDll#_Init();
	#TargetDll#_EntryPoint();

	return 0;
}