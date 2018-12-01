// DrvMultiInstal.cpp : Defines the exported functions for the DLL application.
//

#define _DRVMULTIINSTAL_EXPORT_ 1

#include "stdafx.h"
#include "DrvMultiInstal.h"

namespace DrvMultiInstal
{
	/*extern "C" */bool CDrvInstallFunc::AddDriver()
	{
		TRACE_LOG("AddDriver Entered!");
		
		int x, y;
		
		x = 3;
		y = 4;
		
		printf("x + y = %d\n", x + y);
		
		return TRUE;
	}
}

