/*

Deconstruct a number n in a sum of powers of 2

eg:
Input: n = 43
Output: 1 2 8 32 (2^0 + 2^1 + 2^3 + 2^5 = 43)

*/

#include <iostream>
#include <vector>

std::vector<int> deconstructNumber(unsigned long long int _number)
{
	std::vector<int> powers;
	int i = 0;

	while (_number > 0) {
		if (_number % 2 == 1) {
			powers.push_back(i);
		}
		_number /= 2;
		i++;
	}

	return powers;
}

int main()
{
	unsigned long long int number;
	std::cout << "Number: ";
	std::cin >> number;

	std::vector<int> powers = deconstructNumber(number);

	for (int i = 0; i < powers.size(); i++) {
		int power = powers[i];
		int result = 1 << power;
		std::cout << result;

		if (i < powers.size() - 1) {
			std::cout << " ";
		}
	}
	std::cout << " (";

	for (int i = 0; i < powers.size(); i++) {
		int power = powers[i];
		std::cout << "2^" << power;

		if (i < powers.size() - 1) {
			std::cout << " + ";
		}
	}
	std::cout << " = " << number << ")";

	return 0;
}
