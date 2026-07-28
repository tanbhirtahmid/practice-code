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
    vstring p1(n), p2(n), p3(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p1[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> p2[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> p3[i];
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