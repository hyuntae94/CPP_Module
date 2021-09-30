#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Called FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string param)
{
    this->name = param;
    std::cout << "FragTrap Created : " << this->name << std::endl;
    this->hitPoints = 100;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->energyPoints = 100;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->attackDamage = 30;
    std::cout << "AttackDamage Initialized " << this->attackDamage << std::endl
                << "----------------------------------------" << std::endl;
}

FragTrap::FragTrap(const FragTrap& param)
{
    std::cout << "Called FragTrap Copy Constructor" << std::endl;
    *this = param;
}

FragTrap& FragTrap::operator=(const FragTrap& param)
{
    std::cout << "Called FragTrap Assignment Operator" << std::endl;
    this->ClapTrap::operator=(param);
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "🤚 Called FragTrap highFivesGuys " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Called FragTrap Destructor" << std::endl;
}