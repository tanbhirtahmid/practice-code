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

    // vint a(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a<=10)
        {
            cout << "A[" << i << "] = " << a << endn;
        }
        
    }
    

    return 0;
}