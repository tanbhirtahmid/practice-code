#include <iostream>

int main() {

    std::cout << "What is your name?" << std::endl;
    // std::cout << "It is really cool to be here." << std::endl;
    // int x=4;
    // std::cout << x << '\n';
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello " << name << '\n';

    return 0;
}