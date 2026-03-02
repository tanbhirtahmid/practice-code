#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    long long int last, ith; cin >> last >> ith;
    long long int x=(last+1)/2;
    if (ith<=x)
    {
        cout << 1+(ith-1)*2;
        
    }
    else
    {
        ith=ith-x;
        cout << 2+(ith-1)*2;
    }
        

    return 0;

}