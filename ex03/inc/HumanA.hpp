#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../inc/Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string	m_name {};
	Weapon&		m_weapon;	//can't change m_weapon can only change the original object.

public:
	HumanA(const std::string& name, Weapon& weapon);
	void attack();
};

#endif