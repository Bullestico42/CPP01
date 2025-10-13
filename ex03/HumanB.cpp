#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "HumanB.hpp"

HumanB::HumanB() : _name("undefined"), _wp(NULL) {}

HumanB::HumanB(std::string NameInput)
{
    _name = NameInput;
    _wp = 0;
}

HumanB::~HumanB() {}

void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _wp->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &WeaponInput)
{
    _wp = &WeaponInput;
}

#endif
