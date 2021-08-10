#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;//사람이름
	Weapon		*weapon;//무기클래스, 널포인터로 초기화 하기때문에

public:

	HumanB(std::string name) : name(name), weapon(0) {};
    //인간 B는 무기가 필수는 아니기 때문에 nullptr로 초기화

	void	attack();//공격함수

	Weapon&	getWeapon();//무기클래스반환
	void	setWeapon(Weapon& newWeapon);//무기생성
};

#endif