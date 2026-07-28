#include <bits/stdc++.h>
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

    int n, m; cin >> n >> m;
    vint a(n), l(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> l[i];
    }

    set <int> el;
    vint count(n);

    for (int i = n-1; i > -1; i--)
    {
        el.insert(a[i]);
        count[i]=el.size();
    }
    
    for (int i = 0; i < m; i++)
    {
        cout << count[l[i]-1] << endn;
    }
    
    

    return 0;
}