#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Called DiamondTrap Default Constructor" << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string param): ClapTrap(param + "_clap_name"), FragTrap(param), ScavTrap(param)
{
    this->name = param;
    std::cout << "DiamondTrap Created : " << this->name << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->energyPoints = ScavTrap::energyPoints;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->attackDamage = FragTrap::attackDamage;
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
    std::cout << "Called Diamond Destructor" << std::endl;
}