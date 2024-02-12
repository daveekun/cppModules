#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon)
{
	weapon = _weapon;
	name = _name;
	std::cout << name << " HumanA has been created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destroyed HumanA " << name << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacked with " << weapon.getType() << std::endl;
}