#include "HumanB.hpp"

HumanB::HumanB() : _name("Undefined"), _wp(NULL) {}

HumanB::HumanB(std::string NameInput)
{
    _name = NameInput;
    _wp = NULL;
}

HumanB::~HumanB() {}

void    HumanB::attack()
{
    if (!_wp) {
        std::cout << _name  << " cannot attack." << std::endl;
        return ;
    }
    std::cout << _name << " attacks with their " << _wp->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &WeaponInput)
{
    _wp = &WeaponInput;
}
