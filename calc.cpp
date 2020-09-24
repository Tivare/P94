#include "calc.h"

int calc(int a, int b, char op)
{
	switch(op)
	{
		case '+':
		return Sum(a,b);
		break;
		case '-':
		return Dif(a,b);
		break;
		case '*':
		return Prod(a,b);
		break;
		case '/':
		return Div(a,b);
		break;
	}	
}