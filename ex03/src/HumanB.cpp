#include "../inc/HumanB.hpp"

HumanB::HumanB(const std::string& name) : m_name {name}
{
	std::cout << "HumanB created" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << m_name << " attacks with a "
		<< m_weapon->getType() << std::endl;
}