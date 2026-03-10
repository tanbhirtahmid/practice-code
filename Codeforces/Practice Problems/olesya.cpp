#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    long long int mini = pow(10, n-1);
    long long int maxi = pow(10, n);

    for (long long int i = mini; i < maxi; i++)
    {
        if (i%t==0)
        {
            cout << i;
            exit(0);
        }
        
    }
    cout << -1;
    

    return 0;

}