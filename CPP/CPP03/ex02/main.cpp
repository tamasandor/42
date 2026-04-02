#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	// ClapTrap me("Andor");
	// ClapTrap non(me);
	// ClapTrap anotherobject("Another");
	// ScavTrap robot;
	FragTrap frog("Green");

	// me.takeDamage(10);
	// me.takeDamage(10);
	// me.beRepaired(10);
	// me.takeDamage(5);
	// me.attack("Another");
	// non.takeDamage(5);
	// robot.guardGate();
	frog.attack("Andor");
	frog.takeDamage(5);
	frog.beRepaired(5);
	frog.highFivesGuys();
	return 0;
}