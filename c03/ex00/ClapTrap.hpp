#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
private:
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

    ~ClapTrap();

};

#endif
