#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
	std::string m_type;
public:
	const std::string	&getType();
	void				setType(std::string);
	Weapon(std::string type);
	~Weapon();
};

#endif
