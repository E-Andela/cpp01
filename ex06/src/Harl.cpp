#include "../inc/Harl.hpp"
#include <iostream>

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n"
			  << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
			  << "I really do!\n" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]\n"
			  <<"I cannot believe adding extra bacon costs more money. "
              << "You didn't put enough bacon in my burger! If you did, "
			  <<"I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\n"
              << "I think I deserve to have some extra bacon for free. "
              << "I've been coming for years whereas you started working here since last month.\n"
			  << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]\n"
              << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functionPtr[])() {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] {"DEBUG", "INFO", "WARNING", "ERROR"};
	int levelsCount = sizeof(levels) / sizeof(levels[0]);

	int index {-1};
	for (int i {0}; i < levelsCount; i++)
	{
		if (levels[i].compare(level) == 0)
		{
			index = i;
			break;
		}
	}

	switch(index)
	{
	case 0:
		(this->*functionPtr[0])();
		// intentional fall through
	case 1:
		(this->*functionPtr[1])();
		// intentional fall through
	case 2:
		(this->*functionPtr[2])();
		// intentional fall through
	case 3:
		(this->*functionPtr[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}