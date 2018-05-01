#include "Header.h"

int HelloBySearch::helloBySearch()
{
	std::string hello = "Hello C++!";
	for(int i = 0; hello[i] != 0; i++)
	{
		char rand = ' ';
		while (rand != hello[i])
		{
			std::cout << rand;
			Sleep(10);
			std::cout << "\b";
			rand = std::rand() % 126 + '!';
		}
		std::cout << rand;
	}
	std::cout << "\n";

	return 0;
}