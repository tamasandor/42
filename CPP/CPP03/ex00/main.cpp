#include "ClapTrap.hpp"

int	main()
{
	ClapTrap me("Andor");
	ClapTrap non(me);
	ClapTrap anotherobject("Another");

	me.takeDamage(10);
	me.takeDamage(10);
	me.beRepaired(10);
	me.takeDamage(5);
	me.attack("Another");
	non.takeDamage(5);
	return 0;
}