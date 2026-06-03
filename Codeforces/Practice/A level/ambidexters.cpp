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

    int l, r, a; cin >> l >> r >> a;
    
    if (a==0)
    {
        if (l==0 || r==0)
        {
            cout << 0;
        }
        else if (l==r)
        {
            cout << l+r;
        }
        else
        {
            cout << min(l,r);
        }
        
    }
    else if(l==0)
    {
        cout << 2*min(r,a);
    }
    else if(r==0)
    {
        cout << 2*min(l,a);
    }
    else if (l==r)
    {
        cout << l+r+(a/2)*2;
    }
    else if (l>r)
    {
        if (r+a>=l)
        {
            while (r!=l)
            {
                r++;
                a--;
            }
            cout << l+r+(a/2)*2;
        }
        else cout << (r+a)*2;
    }
    else if (r>l)
    {
        if (l+a>=r)
        {
            while (l!=r)
            {
                l++;
                a--;
            }
            cout << l+r+(a/2)*2;
        }
        else cout << (l+a)*2;
    }
    
    

    // cout << l+r;

    return 0;
}