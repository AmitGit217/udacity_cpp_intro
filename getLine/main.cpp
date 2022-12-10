#include <iostream>
#include <string>

int main()
{
    std::string name = "";

    std::cout << "What is your full name? \n";
    std::getline(std::cin, name);

    std::cout << name << std::endl;

    return 0;
}