#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string & stringREF = string;

    std::cout << "-------ADD_OFF_STR--------" << std::endl;
    std::cout << "1. stringPTR: " << & string << std::endl << std::endl;

    std::cout << "-------PRINTING_MEM--------" << std::endl;
    std::cout << "1. stringPTR: " << stringPTR << std::endl;
    std::cout << "2. stringREF: " << & stringREF << std::endl << std::endl;

    std::cout << "2. stringREF: " << & stringREF << std::endl << std::endl;
    std::cout << "-------PRINTING_VALUE--------" << std::endl;
    std::cout << "1. stringPTR: " << *stringPTR << std::endl;
    std::cout << "2. stringREF: " << stringREF << std::endl;

    return 0;
}