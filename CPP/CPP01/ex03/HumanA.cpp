#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: m_weapon(weapon)
{
	m_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack( void )
{
	std::cout << m_name  << " attacked with their " << m_weapon.getType() << '\n';
}