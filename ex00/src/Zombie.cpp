#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : m_name {name}
{
	std::cout << "The decaying corpse began to twitch...\n";
	std::cout << "Lifeless eyes open. A zombie has begun to move!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << m_name << " groans as it collapses into dust...\n";
    std::cout << "Only the stench of decay remains." << std::endl;
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}