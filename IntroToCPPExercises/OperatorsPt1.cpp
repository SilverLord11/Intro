#include<iostream>

void main() 
{
	int first = 0;

	std::cout << "Enter the first number." << std::endl;

	std::cin >> first;
	if (std::cin.fail())
	{
		std::cout << "You didn't enter an integer.";
		std::cout << "So, we will just use '5' instead." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
}