#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon      *_wp;
public:
    HumanB();
    HumanB(std::string NameInput);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon wp);
};
