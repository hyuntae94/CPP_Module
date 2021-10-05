#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();

    virtual void makeSound() const;
};

WrongCat::WrongCat()
{
    this->type = "WrongCatCatCat";
    std::cout << this->type << "의 default생성자가 호출되었습니다!!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound!!! yayaya" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat의 소멸자가 호출되었습니다!!" << std::endl;
}
