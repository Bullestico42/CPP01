#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie* ZombieHorde = new Zombie[N];

    for (size_t i = 0; i < (size_t)N; i++)
        ZombieHorde[i].setName(name);

    return ZombieHorde;
}