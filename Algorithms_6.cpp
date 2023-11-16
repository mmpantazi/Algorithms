/*

They will be given n numbers. Verify how many numbers are from Fibonacci sequence

*/

#include <iostream>
#include <vector>

bool isFibonacci(int _n)
{
	if (_n == 0)
	{
		return true;
	}

	int previous = 0;
	int current = 1;
	int temp;

	while (current <= _n)
	{
		if (current == _n)
		{
			return true;
		}
		temp = current;
		current += previous;
		previous = temp;
	}

	return false;
}

void fibonacciCount()
{
	int n;
	std::cout << "Enter the number of elements: ";
	std::cin >> n;

	std::vector<int> numbers(n);
	std::cout << "Enter " << n << " numbers:\n";
	for (int i = 0; i < n; ++i)
	{
		std::cin >> numbers[i];
	}

	int count = 0;
	for (int num : numbers)
	{
		if (isFibonacci(num))
		{
			++count;
		}
	}

	std::cout << "The number of Fibonacci numbers: " << count << std::endl;
}

int main()
{
	fibonacciCount();
	return 0;
}