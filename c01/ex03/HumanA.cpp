#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

Weapon& HumanA::getWeapon()
{
	return (this->weapon);
}