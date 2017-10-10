// test_dll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BaseDll.h"

#include <stdio.h>

#pragma comment(lib, "BaseDll.lib")

class CDriverDll:public CBaseDll
{
public:
	CDriverDll();

public:
	void PrintDriver();
};

CDriverDll::CDriverDll()
{

}

void CDriverDll::PrintDriver()
{
	a = 100;
	b = 100;

	func();
}

int main(int argc, char* argv[])
{
	CDriverDll driver;
	
	driver.PrintDriver();

	return 0;
}
