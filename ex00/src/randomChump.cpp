#include "../inc/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie randomZombie {name};
	randomZombie.announce();
}