#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "-----------------" << std::endl << "Test 1: DEBUG" << std::endl;
    harl.complain("DEBUG");
    std::cout << "-----------------" << std::endl << "Test 2: INFO" << std::endl;
    harl.complain("INFO");
    std::cout << "-----------------" << std::endl << "Test 3: WARNING" << std::endl;
    harl.complain("WARNING");
    std::cout << "-----------------" << std::endl << "Test 4: Empty ERROR" << std::endl;
    harl.complain("ERROR");
    std::cout << "-----------------" << std::endl << "Test 5: Empty string" << std::endl;
    harl.complain("");
    return (0);
}