#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Default";
    std::cout << "ClapTrap Called Default Construtor" << std::endl;
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
}

ClapTrap& ClapTrap::operator=(const ClapTrap& param)
{
    std::cout << "Called ClapTrap Assignment Operator" << std::endl;
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

void ClapTrap::setName(std::string param)
{
    this->name = param;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
    this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
    this->attackDamage = amount;
}

std::string ClapTrap::getName()
{
    return this->name;
}

unsigned int ClapTrap::getHitPoints()
{
    return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Called ClapTrap Destructor"<< std::endl;
}
