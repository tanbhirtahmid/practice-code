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
void fastIO() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void openfile()
{
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
}

int code() {
    long long a, b, k;
    cin >> a >> b >> k;

    if(a <= k && b <=k)
    {
        cout << 1 << endn;
        return 0;
    }
    else if(a%k==0 && b%k==0)
    {
        cout << 1 << endn;
        return 0;
    }
    else if (a==b)
    {
        cout << 1 << endn;
        return 0;
    }
    
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