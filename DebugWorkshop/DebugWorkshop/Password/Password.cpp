#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;

	// If we type EXACTLY 16 chars - the program will print "Congratulations",
	// Since that if we do input 16 chars - there won't be any space for a null which indicates the end of a string,
	// Which means there will be an error - and the password won't matter!
}
