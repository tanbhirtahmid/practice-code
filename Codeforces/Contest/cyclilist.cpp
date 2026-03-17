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
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    k--; p--;
    vint cost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    int save=cost[p];

    int sum=0, win=0;

    if (p<k)
    {
        while (sum<m)
        {
            sum+=cost[p];

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