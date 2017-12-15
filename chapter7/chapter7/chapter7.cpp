// chapter7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int getInterger()
{
	while(true)
	{
		std::cout << "please input an integer \n";
		int num1;
		std::cin >> num1;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return num1;
		}
	}
}

char getOperator()
{
	while (true)
	{
		std::cout << "please input an  operator \"+,-,*,/\"\n";
		char op;
		std::cin >> op;
		std::cin.ignore(32767, '\n');
		if(op=='+' || op=='-' || op=='*' || op=='/')
		{
			return op;
		}
	}
}

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}

using arithmeticFcn = int(*)(int, int);

arithmeticFcn getArithmeticFunction(char op)
{
	switch (op)
	{
	case '+':	return add;			break;
	case '-':	return subtract;	break;
	case '*':	return multiply;	break;
	case '/':	return divide;		break;
	default:
		break;
	}
}

int doTheMath(int x, int y, char op)
{
	int result = (getArithmeticFunction(op))(x, y);
	return result;
}

int main()
{
	int num1 = getInterger();
	int num2 = getInterger();
	char op = getOperator();
	std::cout << "the result is " << doTheMath(num1, num2, op) << "\n";


    return 0;
}

