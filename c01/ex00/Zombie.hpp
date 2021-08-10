#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class	Zombie
{
private:
	std::string name;

public:

	void		announce(void);

	Zombie(std::string name) : name(name){};
	Zombie() : name("default") {};
    ~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif