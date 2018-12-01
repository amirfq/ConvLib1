// ConsoleApp1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\DrvMultiInstal.h"

int main()
{
	DrvMultiInstal::CDrvInstallFunc::AddDriver();
	printf("Enter a chacter to exit! %c\n", getchar());
	return 0;
}

