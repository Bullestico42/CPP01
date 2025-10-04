#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
    
public:
    Zombie();
    ~Zombie();
    void    Announce(void);
    void    setName(std::string name);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

