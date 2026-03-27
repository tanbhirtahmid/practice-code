#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int n, t; cin >> n >> t;
    if (n<1 || t<2 || n>100 || t>10)
    {
        cout << -1;
        exit(0);
    }
    else if (t!=10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else if(n!=1){
        cout << 1;
        for (int i = 0; i < n-1; i++)
        {
            cout << 0;
        }
    }
    else cout << -1;
    
    
    

    return 0;

}