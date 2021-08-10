#include "Weapon.hpp"

const std::string&	Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string& newType)
{
	if (newType == "")
	{
		std::cout << "Need Weapon Type" << std::endl;
		return ;
	}
	this->type = newType;
	return ;
}
