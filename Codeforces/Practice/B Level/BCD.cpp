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

    int n, a; cin >> n >> a;

    int ans=0;

    vint t(n);

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
       
    int x=(a-1)+1, y=(a-1)-1;
    
    if (t[a-1]==1)
    {
        ans++;
    }

    for (int i = 0; i < n; i++)
    {


        if (x>n-1 && t[y]==1)
        {
            ans++;
        }
        else if (y<0 && t[x]==1)
        {
            ans++;
        }
        else if (t[x]==1 && t[y]==1)
        {
            ans+=2;
        }
        
        x++;
        y--;
    
    }
    
    cout << ans;

    return 0;
}