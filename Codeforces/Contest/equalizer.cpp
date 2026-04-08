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
    int n, k; cin >> n >> k;
    vint a(n);
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    

    bool won = true;

    if (sum%2==0)
    {
        won=false;
    }
    else won = true;

    if (!won)
    {
        sum=n*k;
        
            if (sum%2==0)
        {
            won=true;
        }
        else won = false;
    }
    
    

    if (won)
    {
       cout << "YES" << endn;
    }
    else cout << "NO" << endn;
    
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