#include "../inc/Harl.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " [log level]" << std::endl;
		return (EXIT_FAILURE);
	}

	Harl harl;
	harl.complain(argv[1]);

	return (0);
}