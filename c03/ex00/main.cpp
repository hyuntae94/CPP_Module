#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("hyuntae");
    ClapTrap b(a);

    b.attack("lalala");
    b.takeDamage(20);
    b.beRepaired(30);
}
