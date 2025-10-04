#include "Zombie.hpp"
#define MAX_HORDE (size_t)15

int main()
{
    Zombie *Zombie1;
    Zombie *Zombie2;
    Zombie *Zombie3;
    Zombie *Horde;

    randomChump("King K Rool");
    randomChump("Enderman");
    randomChump("Padrino Daniele");

    std::cout << std::endl;

    Zombie1 = newZombie("");
    Zombie1->Announce();
    delete Zombie1;
    
    std::cout << std::endl;

    Zombie2 = newZombie("Crevette");
    Zombie2->Announce();
    delete Zombie2;

    std::cout << std::endl;

    Zombie3 = newZombie("Crabe");
    Zombie3->Announce();
    delete Zombie3;
    
    std::cout << std::endl;

    Horde = zombieHorde(15, "Pascal");
    for (size_t i = 0; i < MAX_HORDE; i++)
    {
        std::cout << i << ": ";
        Horde[i].Announce();
    }
    delete[] Horde;
    return 0;
}