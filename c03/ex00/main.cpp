#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("hyuntae");
    ClapTrap b(a);
    ClapTrap c = a;

    b.attack("lalala");
    b.takeDamage(20);
    b.beRepaired(30);

    c.attack("blblblbl");
    c.takeDamage(40);
    c.beRepaired(50);
}
