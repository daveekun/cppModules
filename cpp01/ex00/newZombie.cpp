#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie *z = new Zombie();
	z->setname(name);
	z->announce();
	return z;
}