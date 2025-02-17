#include "../inc/HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: m_name {name}
	, m_weapon {weapon}
{
	std::cout << "HumanA created" << std::endl;
}

void HumanA::attack()
{
	std::cout << m_name << " attacks with a "
		<< m_weapon.getType() << std::endl;
}