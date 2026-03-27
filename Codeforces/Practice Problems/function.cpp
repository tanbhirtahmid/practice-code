#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    long long int n, sum=0; cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2==0)
    //     {
    //         sum+=i;
    //     }
    //     else sum-=i;
        
    // }

    if(n%2==0)
    {
        cout << n/2;
    }
    else
    cout << -(n+1)/2;
    
    return 0;
}