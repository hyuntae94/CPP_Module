#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << wrongcat->getType() << std::endl; 
    dog->makeSound();
    cat->makeSound();
    meta->makeSound();
    wrongcat->makeSound();

    delete meta;
    delete dog;
    delete cat;
    delete wrongcat;
}