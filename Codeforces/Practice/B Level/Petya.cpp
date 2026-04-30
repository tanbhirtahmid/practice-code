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

    int n; cin >> n;

    
    vint h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    
    if (n==1)
    {
        cout << 1;
        return 0;
    }
    
    int ans=-1;

    for (int i = 0; i < n; i++)
    {
        int x=0;
        for (int j = i ; j < n-1; j++)
        {
            // int y=99999;

            if (h[j]>=h[j+1])
            {
                // y=h[j];
                x++;
            }
            else break;
        }
        for (int j = i ; j > 0; j--)
        {
            // int y=99999;

            if (h[j]>=h[j-1])
            {
                // y=h[j];
                x++;
            }
            else break;
        }
        ans=max(ans, x);
        
    }
    
    cout << ans+1;

    return 0;
}