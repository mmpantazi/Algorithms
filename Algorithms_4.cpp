/*

Consider the Fibonacci sequence known by the recurrence relation: F1=1; F2=1;
Fi=Fi-2+Fi-1, i>=3. For n pairs of numbers x, y let the number of pairs for
which the numbers Fx and Fy are prime to each other.

*/

#include <iostream>

int fibonacci(int _pos)
{
	if (_pos == 0)
	{
		return 0;
	}
	if (_pos <= 2)
	{
		return 1;
	}
	int lhs{ 0 };
	int rhs{ 1 };
	int fib{ lhs + rhs };
	for (int i = 3; i <= _pos; i++)
	{
		lhs = rhs;
		rhs = fib;
		fib = lhs + rhs;
	}
	return fib;
}

int gcd(int _a, int _b) {
	if (_b == 0)
	{
		return _a;
	}
	return gcd(_b, _a % _b);
}

void fibonacciPrimePairs()
{
	std::cout << "Pairs: ";
	int pairsCount;
	std::cin >> pairsCount;

	int x;
	int y;

	for (int i = 0; i < pairsCount; i++)
	{
		std::cout << "x = ";
		std::cin >> x;
		std::cout << "y = ";
		std::cin >> y;
		x = fibonacci(x);
		y = fibonacci(y);
		if (gcd(x, y) == 1)
		{
			std::cout << "x = " << x << ", " << "y = " << y;
			std::cout << " are prime to each other!" << std::endl;
		}
		else
		{
			std::cout << "x = " << x << ", " << "y = " << y;
			std::cout << " are not prime to each other." << std::endl;
		}
	}
}

int main()
{
	fibonacciPrimePairs();
	return 0;
}