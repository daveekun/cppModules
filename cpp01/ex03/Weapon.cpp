#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string _type)
{
	type = _type;
	std::cout << "Weapon " << type << " created" << std::endl;
}
Weapon::Weapon()
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << type << " destroyed" << std::endl;
}
const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType( std::string _type )
{
	type = _type;
}