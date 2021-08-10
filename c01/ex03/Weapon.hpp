#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>

class Weapon
{
private:
	std::string type;//무기 타입

public:

	Weapon(std::string type) : type(type){};//무기타입 초기화

	const std::string&	getType();//type리턴
	void				setType(const std::string& newType);//새로운 type설정
};

#endif