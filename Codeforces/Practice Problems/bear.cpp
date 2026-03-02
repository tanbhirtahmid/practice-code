#include <iostream>
using namespace std;

int main () {
    int lak, bob, i;
    cin >> lak >> bob;
    for (i = 0; lak<=bob; i++)
    {
        lak*=3;
        bob*=2;
    }

    cout << i;
    
}