#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Default";
    std::cout << "Called ClapTrap Default Construtor" << std::endl;
    this->hitPoints = 10;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->energyPoints = 10;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->attackDamage = 0;
    std::cout << "AttackDamage Initialized " << this->attackDamage << std::endl
                << "----------------------------------------" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    std::cout << "ClapTrap Created : " << this->name << std::endl;
    this->hitPoints = 10;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->energyPoints = 10;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->attackDamage = 0;
    std::cout << "AttackDamage Initialized " << this->attackDamage << std::endl
                << "----------------------------------------" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& param)
{
    std::cout << "Called ClapTrap Copy Constructor" << std::endl;
    *this = param;
    // std::cout << "----------------------------------------\n" 
    //     << "ClapTrap " << &param << " Copied ---> " <<  this << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& param)
{
    std::cout << "Called ClapTrap " << "Assignment Operator" << std::endl;
    this->name = param.name;
    this->hitPoints = param.hitPoints;
    this->energyPoints = param.energyPoints;
    this->attackDamage = param.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string & target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " 
                << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "👊 ClapTrap " << this->name << " take " << amount << " damage!!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "❤️  ClapTrap " << this->name << " be Repaired " << amount << std::endl;
    this->hitPoints += amount;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Called ClapTrap "<< this->name << " Destructor "  << std::endl;
}
