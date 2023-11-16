/*

How many prime digits are in a number?

*/


#include <iostream>
#include <string>

bool isPrimeDigit(const char& _digit) 
{
	return _digit == '2' || _digit == '3' || _digit == '5' || _digit == '7';
}

int countPrimeDigits(const std::string& _number) 
{
	int count = 0;

	for (char digit : _number)
	{
		if (isPrimeDigit(digit)) 
		{
			count++;
		}
	}

	return count;
}

int main() 
{
	std::string number;
	std::cout << "Number: ";
	std::cin >> number;
	std::cout << "Number of prime digits: " << countPrimeDigits(number) << std::endl;

	return 0;
}
