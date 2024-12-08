#include <iostream>

int main()
{
	int size = 0;

	// Whenever an unsigned int gets down to zero - it will never have a negative value, which means that if you
	// Decrease it from zero, it will go back to the highest value an unsigned int can be - which is positive!
	// That means, that the loop will be infinite as size will never be below zero!

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size >= 0)
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}