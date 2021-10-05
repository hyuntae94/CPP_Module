#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_


#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const;
};

Animal::Animal()
{
    this->type = "Animal";
    std::cout << this->type << "의 default 생성자가 호출되었습니다!!" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}


std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound!!!!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal의 소멸자가 호출되었습니다!!" << std::endl;
}

#endif