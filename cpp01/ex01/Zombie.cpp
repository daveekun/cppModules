#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "Zombie has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " has been destroyed" << std::endl;
}

void Zombie::setname( std::string _name )
{
	name = _name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiinnnnnzzzZZ" << std::endl;
}