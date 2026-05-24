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

void code() {
    long long int a, b, c, m;
    cin >> a >> b >> c >> m;
    long long int alice=0, bob=0, carol=0;

    long long int sum = 0;

    for (int i = 1; i <= m; i++)
    {
        a*=sum;
        b*=sum;
        c*=sum;
        if (a==b && b==c && c==a)
        {
            alice+=2;
            bob+=2;
            carol+=2;
        }
        else if (a==b)
        {
            alice+=3;
            bob+=3;
        }
        else if (b==c)
        {
            bob+=3;
            carol+=3;
        }
        else if (c==a)
        {
            carol+=3;
            alice+=3;
        }
        
        
        
        
    }
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        code();
    }
    
    return 0;
}