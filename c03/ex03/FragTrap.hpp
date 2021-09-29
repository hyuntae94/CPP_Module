#ifndef FRAGTRAP_HPP_
# define FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(const FragTrap&);

    FragTrap& operator=(const FragTrap&);

    void highFivesGuys();

    ~FragTrap();
};

#endif