#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_

# include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();

    std::string getType() const;
    virtual void makeSound() const;
};

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << this->type << "의 default생성자가 호출되었습니다!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound!!!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal의 소멸자가 호출되었습니다!!" << std::endl;
}


#endif