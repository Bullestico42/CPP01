#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie zb;
    zb.setName(name);
    zb.Announce();
}