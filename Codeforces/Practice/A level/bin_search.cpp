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

    long long int n, q;
    cin >> n >> q;
    vllint a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    for (int i = 0; i < q; i++)
    {   
        long long int b;
        cin >> b;
        if (binary_search(all(a), b))
        {
            cout << "found" << endn;
        }
        else
        cout << "not found" << endn;
        
    }
    
    

    return 0;
}