#include "Zombie.hpp"
#include <iostream>
int main(void)
{
	std::cout << "> create horde of 1 Greg" << std::endl;
	Zombie *Greg = zombieHorde(1, "Greg");
	Greg->announce();
	delete[] Greg;

	std::cout << "> create 10 Bobs" << std::endl;
	Zombie *Bobs = zombieHorde(10, "Bob");
	for (size_t i = 0; i < 10; i++)
	{
		Bobs[i].announce();
	}
	delete[] Bobs;
	
	std::cout << "> create 100 Tims" << std::endl;
	Zombie *Tims = zombieHorde(100, "Tim");
	for (size_t i = 0; i < 100; i++)
	{
		Tims[i].announce();
	}
	delete[] Tims;
	return 0;
}