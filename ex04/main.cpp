#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac < 4)
        return (-1);
    if (!av[1] || !av[2] || !av[3]) {
        std::cout << "Usage: <filename>, s1, s2" << std::endl;
        return (-1);
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream fp(filename.c_str());
    std::ofstream outputFile;
    std::string line;

    outputFile.open((filename + ".replace").c_str());
    while (std::getline(fp, line)) {
        int pos = 0;
        pos = line.find(s1, pos);
        while (pos != (int)std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos = line.find(s1, pos + s2.length());
        }
        std::streampos posCursor = fp.tellg();
        if (posCursor != -1)
            outputFile << line << std::endl;
        else
            outputFile << line;
    }
    fp.close();
    outputFile.close();
    return (0);
}