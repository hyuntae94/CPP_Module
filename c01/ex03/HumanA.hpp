#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class HumanA
{

private:
	std::string	name; //사람이름
	Weapon		&weapon; //무기클래스

public:
	HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};
    //사람이름, 무기타입 초기화

	void	attack();//공격함수

	Weapon&	getWeapon();//무기클래스반환
};

#endif