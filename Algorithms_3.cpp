/*

Greatest Common Divisor of n numbers

*/

#include <iostream>

int gcd(int _a, int _b) {
	if (_b == 0) 
	{
		return _a;
	}
	return gcd(_b, _a % _b);
}

int gcdOfNumbers(int _arr[], int _n) 
{
	int result = _arr[0];
	for (int i = 1; i < _n; i++)
	{
		result = gcd(result, _arr[i]);
		if (result == 1) 
		{
			return 1;
		}
	}
	return result;
}

int main() 
{
	int n;
	std::cout << "Enter the number of elements: ";
	std::cin >> n;

	if (n < 2)
	{
		std::cout << "Not enough elements.";
		return 0;
	}

	int* arr = new int[n];

	std::cout << "Enter the numbers: ";
	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	int gcdResult = gcdOfNumbers(arr, n);
	std::cout << "GCD: " << gcdResult << std::endl;

	delete[] arr;

	return 0;
}
