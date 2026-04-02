#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	m_type = type;
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType()
{
	const std::string &retval = m_type;
	return (retval);
}
void				Weapon::setType(std::string newtype)
{
	m_type = newtype;
}

