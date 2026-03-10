#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    long long int n; cin >> n;
    if (n==0)
    {
        cout << 1;
    }
    
    else if (n%4==1)
    {
        cout << 8;
    }
    else if (n%4==2)
    {
        cout << 4;
    }
    else if (n%4==3)
    {
        cout << 2;
    }
    else if(n%4==0)
    {
        cout << 6;
    }
    
    
    

    return 0;

}