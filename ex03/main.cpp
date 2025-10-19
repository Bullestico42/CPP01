#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    std::cout << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    std::cout << std::endl;
    {
        Weapon club;
        Weapon sword("Netherite Sword [Sharpness V | Unbreaking III | Fire Aspect II]");
        HumanB PtitBiscuit("P'tit Biscuit");
        PtitBiscuit.attack();
        PtitBiscuit.setWeapon(sword);
        PtitBiscuit.attack();
        PtitBiscuit.setWeapon(club);
        PtitBiscuit.attack();
    }
    return (0);
}