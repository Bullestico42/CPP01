#include <iostream>
#include <fstream>
#define FAILURE 1
#define SUCCESS 0

int main(int ac, char **av)
{
    if (!av[1] || !av[2] || !av[3] || ac < 4 || ac > 4) {
        std::cout << "Usage: <filename>, s1, s2." << std::endl;
        return (FAILURE);
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream File(filename.c_str());
    if (!File) {
        std::cout << "File doesn't exit or doesn't have right perms." << std::endl;
        return (FAILURE);
    }
    if (File.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "The " << filename << " is empty." << std::endl;
        return (FAILURE);
    }
    std::ofstream outputFile;
    std::string line;

    outputFile.open((filename + ".replace").c_str());
    while (std::getline(File, line)) {
        int pos = 0;
        pos = line.find(s1, pos);
        while (pos != (int)std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos = line.find(s1, pos + s2.length());
        }
        std::streampos posCursor = File.tellg();
        if (posCursor != -1)
            outputFile << line << std::endl;
        else
            outputFile << line;
    }
    File.close();
    outputFile.close();
    return (SUCCESS);
}