#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "\n<" << this->name << "> " << "destroy\n";
}

void	Zombie::announce(void)
{
	std::cout << "\n<" << this->name << "> " << "BraiiiiiiinnnzzzZ...\n";
}