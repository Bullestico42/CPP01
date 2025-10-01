#include "Zombie.hpp"

Zombie::Zombie(std::string name) {_name = name;}

Zombie::~Zombie()
{
    std::cout << "Deleting: " << _name << std::endl;
}

void    Zombie::Announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}