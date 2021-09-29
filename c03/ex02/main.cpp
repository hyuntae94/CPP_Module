#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("hyuntae");
    FragTrap piter("piter");
    FragTrap hyuntae;

    hyuntae = a;

    hyuntae.setAttackDamage(30);
    hyuntae.attack(piter.getName());

    piter.takeDamage(hyuntae.getAttackDamage());
    piter.beRepaired(20);

    hyuntae.highFivesGuys();
    return (0);
}