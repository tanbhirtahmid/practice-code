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

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code() {
    int n, k; cin >> n >> k;
    vint a(n);
    vint p(k);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < k; i++)
    {
        cin >> p[i];
    }
    
    if (count(all(a), a[p[0]])==n)
    {
        cout << 0 << endn;
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