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

    int n, q;
    cin >> n >> q;

    vector <int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    // vector <int> a(q), b(q);
    vllint sum;
    sum.pb(0);
    
    for (int i = 0; i < n; i++)
    {
        sum.pb(sum[i]+x[i]);
        // cout << sum[i] << endn;
    }

    for (int i = 0; i < q; i++)
    {
        // a[i]--;
        // b[i]--;
    }
    
    
    // cout << sum[n-1];
    
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << sum[b]-sum[a-1] << endn;
    }
    
    

    return 0;
}