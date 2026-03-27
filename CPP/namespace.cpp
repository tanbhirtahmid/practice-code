#include <iostream>

namespace hi{ int x=9; }

int main(){
    int x=7;
    std::cout << x << '\n';
    std::cout << hi::x;
}