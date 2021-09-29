#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string);
    DiamondTrap(const DiamondTrap&);

    DiamondTrap& operator=(const DiamondTrap&);
    void attack(std::string const &);

    void whoAmI();
    ~DiamondTrap();
};

#endif