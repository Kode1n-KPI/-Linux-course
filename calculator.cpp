#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
	return a * b + 0.5;
}

int Calculator::Div (double a, double b) //ВЛАСНЕ ВИПРАВЛЕННЯ
{
	if (b == 0) {
		
		return 0; 
	}
	// Ділення з округленням (використовуємо +0.5 для округлення до найближчого цілого)
	return (a / b) + 0.5; 
}