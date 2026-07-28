#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;

#define endn '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code() {
    long long n, k, x;

    cin >> n >> k >> x;

    long long int sum =0 ;

    // if (n==k)
    // {
    //     sum = (n*(n+1))/2;

    //     if (sum==x)
    //     {
    //         cout << "YES" << endn;
    //     }
    //     else
    //     cout << "NO" << endn;

    //     return 0;
        
    // }

    long long int last = n-k+1;
    

   long long int one, two;
    // cout << last << endn;
    one = (k*(2*1+(k-1)))/2;
    two = (k*(2*last+(k-1)))/2;

    // cout << one << " " << two << endn;

    if (one<=x && x<=two)
    {
        cout << "YES" << endn;
    }
    else
    cout << "NO" << endn;

    
}

int main() {
    fastIO();

    int t;
    cin >> t;
    while (t--) {
        code();
    }

    return 0;
}