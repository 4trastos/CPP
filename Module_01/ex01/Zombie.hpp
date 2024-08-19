#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();

		void	setName(std::string str);
		
		std::string getName(void);

		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif