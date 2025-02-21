#include "../inc/Zombie.hpp"

int main()
{
	randomChump("Shambler");
	
	Zombie* zombie { newZombie("Vormund") };
	zombie->announce();
	delete (zombie);
	return (0);
}