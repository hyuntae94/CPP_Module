#include "Zombie.hpp"

int		main( void )
{
		Zombie	*HeadZombie = zombieHorde(10, "hyunkim");
		for  (int i = 0; i < 10; i++)
        {
            HeadZombie[i].announce();
        }
		delete [] HeadZombie;
}

