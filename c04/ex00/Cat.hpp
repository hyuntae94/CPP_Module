#ifndef CAT_HPP_
# define CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();

    virtual void makeSound() const;
};

Cat::Cat()
{
    this->type = "Cat";
    std::cout << this->type << "의 default 생성자가 호출되었습니다!!" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat MeowMeow~~" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat의 소멸자가 호출되었습니다!!" << std::endl;
}

#endif