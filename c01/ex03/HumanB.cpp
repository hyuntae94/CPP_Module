#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->weapon)//무기가 존재하면
	{
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->name << " No Weapon!!!" << std::endl;
	}
}

Weapon&	HumanB::getWeapon()
{
	return (*(this->weapon));//반환값이 참조연산자이기 때문에 *를 사용해서 무기클래스자체를 넘겨줘야한다.
}


void	HumanB::setWeapon(Weapon& newWeapon)
{
	if (newWeapon.getType() == "")
	{
		std::cout << "Need Weapon Type" << std::endl;
		return ;
	}
	this->weapon = &newWeapon;//humanB클래스의 weapon타입이 포인터이기 때문에 주소값을 넘겨줘야한다.
	return ;
}