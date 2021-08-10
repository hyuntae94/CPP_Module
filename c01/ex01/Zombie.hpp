#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include <iostream>

class	Zombie
{
private:
	std::string name;

public:

	void		announce(void);
    void        zombieName(std::string name);

	Zombie(std::string name) : name(name){};
	Zombie() : name("default") {};
    ~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);


#endif