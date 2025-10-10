#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon      &_wp;
public:
    HumanA(std::string NameInput, Weapon &WeaponInput);
    //~HumanA();
    void    attack();
};

#endif
