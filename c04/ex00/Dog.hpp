#ifndef DOG_HPP_
# define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();

    virtual void makeSound() const;
};

Dog::Dog()
{
    this->type = "Dog";
    std::cout << this->type << "의 default 생성자가 호출되었습니다!!" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog WalWal!!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog의 소멸자가 호출되었습니다!!" << std::endl;
}

#endif