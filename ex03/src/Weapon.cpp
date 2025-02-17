#include "../inc/Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string type) : m_type {type}
{
	std::cout << m_type << " created" << std::endl;
}

const std::string& Weapon::getType()
{
	return (m_type);
}

void Weapon::setType(std::string type)
{
	m_type = type;
}