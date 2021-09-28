#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Called ScavTrap Default Constructor" << std::endl;
    this->hitPoints = 100;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->energyPoints = 50;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->attackDamage = 20;
    std::cout << "AttackDamage Initialized " << this->attackDamage << std::endl
                << "----------------------------------------" << std::endl;

}

ScavTrap::ScavTrap(std::string param)
{
    this->name = param;
    std::cout << "Created : " << this->name << std::endl;
    this->hitPoints = 100;
    std::cout <<"HitPoints Initialized " << this->hitPoints << std::endl;
    this->energyPoints = 50;
    std::cout <<"EnergyPoint Initialized " << this->energyPoints << std::endl;
    this->attackDamage = 20;
    std::cout << "AttackDamage Initialized " << this->attackDamage << std::endl
                << "----------------------------------------" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& param)
{
    std::cout << "Called ScavTrap Copy Constructor" << std::endl;
    *this = param;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& param)
{
    std::cout << "Called ScavTrap Assignment operator" << std::endl;
    this->ClapTrap::operator=(param);
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
        << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " enterred in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Called ScavTrap Destructor" << std::endl;
}
