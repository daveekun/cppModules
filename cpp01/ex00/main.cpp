#include "Zombie.hpp"
#include <iostream>
int main(void)
{
	std::cout << "> create greg without saving reference" << std::endl;
	randomChump("Greg");
	std::cout << "> create Bob with saving reference" << std::endl;
	Zombie *Bob = newZombie("Bob");
	Bob->announce();
	std::cout << "> done with announcements" << std::endl;
	delete Bob;
	return 0;
}