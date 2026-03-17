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
    int n; cin >> n;
    vint p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (p[i]-p[(i+1)%n]==1 || p[i]-p[(i+1)%n]==-1 || p[i]-p[(i+1)%n]==n-1 || p[i]-p[(i+1)%n]==-(n-1) )
        {
            count++;
        }
        
    }

    if (count==n)
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