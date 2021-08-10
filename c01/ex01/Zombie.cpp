#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "\n<" << this->name << "> " << "destroy\n";
}

void	Zombie::announce(void)
{
	std::cout << "\n<" << this->name << "> " << "BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::zombieName(std::string name)
{
    if (name == "")
        this->name = "default";
    else
        this->name = name;
}
