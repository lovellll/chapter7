#pragma once

using arithmeticFcn = int(*)(int, int);

int getInterger();

char getOperator();

int add(int x, int y);

int subtract(int x, int y);

int multiply(int x, int y);

int divide(int x, int y);

arithmeticFcn getArithmeticFunction(char op);

int doTheMath(int x, int y, char op);


struct arithmeticStruct
{
	char op;
	arithmeticFcn fcn;
};

static arithmeticStruct arithmeticArray[4]{
	{ '+',add },
	{ '-',subtract },
	{ '*',multiply },
	{ '/',divide }
};