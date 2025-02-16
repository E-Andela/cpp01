#include "../inc/Zombie.hpp"

int main()
{
	int amountOfZombies {8};
	Zombie* horde {zombieHorde(amountOfZombies, "Tharguld")};
	for (int i {0}; i < amountOfZombies; i++)
	{
		horde[i].announce();
	}
	delete [] (horde);
}