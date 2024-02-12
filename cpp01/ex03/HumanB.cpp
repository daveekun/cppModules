#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name)
{
	name = _name;
	std::cout << name << " HumanB has been created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destroyed HumanB " << name  << std::endl;
}

void HumanB::attack()
{
	std::cout << name << " attacked with " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &(_weapon);
}