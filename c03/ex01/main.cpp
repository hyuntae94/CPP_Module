#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("hyuntae");
    ScavTrap piter("piter");
    ScavTrap hyuntae;

    hyuntae = a;

    hyuntae.setAttackDamage(30);
    hyuntae.attack(piter.getName());

    piter.takeDamage(hyuntae.getAttackDamage());
    piter.beRepaired(10);

    hyuntae.guardGate();
}