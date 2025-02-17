#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../inc/Weapon.hpp"
#include <string>

class HumanB
{
private:
	std::string m_name {};
	Weapon*		m_weapon;	//Here I can freely change m_weapon to a different weapon and can also change the original object

public:
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack();
};

#endif