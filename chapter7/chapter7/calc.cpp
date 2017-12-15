#include "stdafx.h"
#include <iostream>
#include "calc.h"



int getInterger()
{
	while (true)
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
		if (op == '+' || op == '-' || op == '*' || op == '/')
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



arithmeticFcn getArithmeticFunction(char op)
{
	for (const auto &ref : arithmeticArray)
	{
		if (ref.op == op)
			return ref.fcn;
	}
}

int doTheMath(int x, int y, char op)
{
	int result = (getArithmeticFunction(op))(x, y);
	return result;
}

