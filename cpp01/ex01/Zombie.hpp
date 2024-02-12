#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setname( std::string name );
		void announce( void );
};

Zombie *zombieHorde( int n, std::string name );

#endif