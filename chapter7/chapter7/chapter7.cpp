// chapter7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "calc.h"








int main()
{
	int num1 = getInterger();
	int num2 = getInterger();
	char op = getOperator();
	std::cout << "the result is " << doTheMath(num1, num2, op) << "\n";


    return 0;
}

