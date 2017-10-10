#include "stdafx.h"
#include "BaseDll.h"

#include <stdio.h>

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
    }
    return TRUE;
}

CBaseDll::CBaseDll()
{ 
	return; 
}

void CBaseDll::func()
{
	printf("a = %d\n", a);
	printf("c = %d\n", c);
	printf("b = %d\n", b);
}

