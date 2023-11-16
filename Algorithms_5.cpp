/*

In a string of natural numbers, an element that has two neighbors and is strictly larger than
them is called a peak. An array with n elements, natural numbers, is given. Calculate the sum
of the elements in the string that are peaks.

eg:
Input: n = 7
3 8 4 4 1 9 1
Output: 17 (because the peak numbers are 8 and 9)

*/


#include <iostream>

void SumOfPeaks()
{
	int numbersCount;
	int sumOfPeaks = 0;
	int previous;
	int middle;
	int next;

	std::cout << "n = ";
	std::cin >> numbersCount;

	if (numbersCount < 3)
	{
		std::cout << "Error! Not enough elements.";
		return;
	}

	std::cout << "Enter the n elements of the array: ";
	std::cin >> previous;
	std::cin >> middle;
	for (int i = 2; i < numbersCount; i++)
	{
		std::cin >> next;
		if (middle > previous && middle > next)
		{
			sumOfPeaks += middle;
		}
		previous = middle;
		middle = next;
	}

	std::cout << "Sum of peak numbers is: " << sumOfPeaks << std::endl;
}

int main()
{
	SumOfPeaks();
	return 0;
}