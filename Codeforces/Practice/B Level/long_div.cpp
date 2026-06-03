#include <bits/stdc++.h>
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

void openfile()
{
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
}

void code() {
    long long n;
    cin >> n;

    vllint div;

    for (long long i = 1; i <= n; i++)
    {
        if(n%i==0) div.pb(i);
    }

    long long mx=1;

    for (long long i = 0; i < div.size()-1; i++)
    {
        if(div[i]==div[i+1]-1)
        {
            long long int l = 0, r =  0;
            l=div[i];
            while (i < div.size()-1 && div[i]==div[i+1]-1)
            {
                r = div[i+1];
                mx = max(mx, r-l+1);
                i++;
            }
            
            
        }
    }

    cout << mx << endn;
    
    
}

int main() {
    fastIO();
    // openfile();

    int t;
    cin >> t;
    while (t--) {
        code();
    }

    return 0;
}