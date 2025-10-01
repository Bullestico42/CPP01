#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
    
public:
    Zombie(std::string name);
    ~Zombie();
    void    Announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);



