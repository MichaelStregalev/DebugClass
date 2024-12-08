#include "part1.h"
#include <iostream>

void string_copy(char* dest, unsigned int destsize, char* src)
{
	while (*dest++ = *src++);
}

void part1()
{
	char password[] = "secret";
	char dest[13];					// Strings are equivalent to char arrays that end in '\n'! which means we need not 12 but 13 chars!
	char src[] = "hello world!";

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
