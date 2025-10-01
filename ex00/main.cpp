#include "Zombie.hpp"

int main()
{
    Zombie *Zombie1;
    Zombie *Zombie2;
    Zombie *Zombie3;

    randomChump("King K Rool");
    randomChump("Alessio");
    randomChump("Padrino Daniele");

    Zombie1 = newZombie("Zombie1");
    Zombie1->Announce();
    delete Zombie1;
    
    Zombie2 = newZombie("Crevette");
    Zombie2->Announce();
    delete Zombie2;

    Zombie3 = newZombie("Crabe");
    Zombie3->Announce();
    delete Zombie3;

    return 0;
}