#include <iostream>
using namespace std;

int main () {
    int shoe[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> shoe[i];
    }


    if (shoe[0]==shoe[1] && shoe[2]==shoe[3] && shoe[1]==shoe[3] && shoe[2]==shoe[0] && shoe[2]==shoe[1])
    {
        cout << 3;
    }
    else if ((shoe[0]==shoe[1] && shoe[1]==shoe[2] && shoe[0]==shoe[2]) || (shoe[1]==shoe[2] && shoe[2]==shoe[3] && shoe[1]==shoe[3]) || (shoe[0]==shoe[2] && shoe[2]==shoe[3] && shoe[0]==shoe[3]) || (shoe[0]==shoe[1] && shoe[1]==shoe[3] && shoe[0]==shoe[3]))
    {
        cout << 2;
    }
    else if ((shoe[0]==shoe[1] && shoe[2]==shoe[3]) || (shoe[0]==shoe[2] && shoe[1]==shoe[3]) || (shoe[0]==shoe[3] && shoe[2]==shoe[1]))
    {
        cout << 2;
    }
    
    else if (shoe[0]==shoe[1] || shoe[1]==shoe[2] || shoe[0]==shoe[2] || shoe[0]==shoe[3] || shoe[3]==shoe[1] || shoe[2]==shoe[3])
    {
        cout << 1;
    }
    else cout << 0;
    
    
    
}