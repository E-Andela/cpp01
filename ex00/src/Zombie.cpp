#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : m_name {name}
{
	std::cout << "The rotting corpse of " << m_name << " began to twitch..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << m_name << " groans as it collapses into dust." << std::endl;
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}