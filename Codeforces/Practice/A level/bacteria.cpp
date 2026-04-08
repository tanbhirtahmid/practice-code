#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fastIO();

    long long int x; cin >> x;
    if (x==1)
    {
        cout << 1;
    }
    
    else if (x%2==0)
    {
        cout << 1;
    }
    else {
        // long long int extra;
        // extra= x-((x/2)*2);
        // cout << 1+extra;
        cout << round(log2(x));
        // printf("%lf", log2(x));
    }

    
    

    return 0;
}