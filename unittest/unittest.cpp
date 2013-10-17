// unittest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "PropertyTest.h"

int _tmain(int argc, _TCHAR* argv[])
{
	PropertyTest test;
	test.Value1 = 444;
	//test.Value2 = 555;
	test.Value3 = 666;

	int v1 = test.Value1;
	int v2 = test.Value2;
	test.setValue2(555);
	v2 = test.Value2;
	//int v3 = test.Value3;

	return 0;
}

