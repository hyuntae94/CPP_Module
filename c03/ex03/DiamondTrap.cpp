#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Called DiamondTrap Default Constructor" << std::endl;
    this->name = "Default";
    this->FragTrap::hitPoints = 100;
    this->ScavTrap::energyPoints = 50;
    this->FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string param): ClapTrap(param + "_clap_name")
{
    this->name = param;
    std::cout << "DiamondTrap Created : " << this->name << std::endl;
    this->FragTrap::hitPoints = 100;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->ScavTrap::energyPoints = 50;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->FragTrap::attackDamage = 30;
    std::cout << "AttackDamage Initialized " << this->attackDamage << std::endl
            << "----------------------------------------" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& param)
{
    std::cout << "Called DiamondTrap Copy Constructor" << std::endl;
    *this = param;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& param)
{
    std::cout << "Called DiamondTrap Assignment Operator" << std::endl;
    this->ClapTrap::operator=(param);
    return (*this);
}

void DiamondTrap::attack(std::string const & param)
{
    ScavTrap::attack(param);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Called DiamondTrap Destructor" << std::endl;
}