#include "Harl.hpp"

int main()
{
    void (Harl::*funcPtr)();

    funcPtr = &Harl::debug;

    Harl    obj;

    (obj.*funcPtr)();

    return (0);
}