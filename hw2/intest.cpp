#include<iostream>
#include<fstream>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "error" << std::endl;
        exit(1);
    }
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "error" << std::endl;
        exit(2);
    }
    //
    char buffer[20];
    in >> buffer;
    std::cout << buffer << std::endl;
    return 0;
}