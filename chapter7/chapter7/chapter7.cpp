// chapter7.cpp : �������̨Ӧ�ó������ڵ㡣
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

