#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
protected:
    std::string                 name;

    unsigned int                hitPoints;
    unsigned int                energyPoints;
    unsigned int                attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap(const ClapTrap&);

    ClapTrap& operator=(const ClapTrap&);

    void attack(const std::string &);
    void takeDamage(unsigned int);
    void beRepaired(unsigned int);

    //ClapTrap individuality//

    //Set member function//
    void setName(std::string);
    void setHitPoints(unsigned int);
    void setEnergyPoints(unsigned int);
    void setAttackDamage(unsigned int);

    //Get member function//
    std::string getName();
    unsigned int getHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getAttackDamage();
    ~ClapTrap();

};

#endif
