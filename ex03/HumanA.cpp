#include "HumanA.hpp"

HumanA::HumanA(std::string NameInput, Weapon &WeaponInput) : _name(NameInput), _wp(WeaponInput) {}

//HumanA::~HumanA() {}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _wp.getType() << std::endl;
}