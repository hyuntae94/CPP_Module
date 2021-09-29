#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap a("hyuntae");
    DiamondTrap piter("piter");
    DiamondTrap hyuntae;

    hyuntae = a;

    hyuntae.setAttackDamage(30);
    hyuntae.attack(piter.getName());

    piter.takeDamage(hyuntae.getAttackDamage());
    piter.beRepaired(20);

    hyuntae.highFivesGuys();
    hyuntae.guardGate();
    hyuntae.whoAmI();
    piter.whoAmI();
    return (0);
}