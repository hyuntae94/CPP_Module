#include "Zombie.hpp"

int	main( void )
{

		Zombie	zb;
		zb.announce();
	
		Zombie	one("one");
		one.announce();

		Zombie	*two = newZombie("two");
		two->announce();
		delete two;

		randomChump("three");
}