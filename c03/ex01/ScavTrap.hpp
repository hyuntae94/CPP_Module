#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(const ScavTrap&);

    ScavTrap& operator=(const ScavTrap&);

    void attack(const std::string&);
    void guardGate();
    ~ScavTrap();
};



#endif