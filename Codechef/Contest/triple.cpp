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

void code() {
    int n;
    cin >> n;
    int x;
    cin >> x;

    for (int i = 0; i+2*n < 3*n; i++)
    {
        int ct0 = 0, ct1=0;
        if(x[i]=='0') ct0++;
        else ct1++;

        if(x[i+n]=='0') ct0++;
        else ct1++;

        if(x[i+2*n]=='0') ct0++;
        else ct1++;

        if(ct1>ct0) cout << 1;
        else cout << 0;
    }

    cout << endn;
    
    
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