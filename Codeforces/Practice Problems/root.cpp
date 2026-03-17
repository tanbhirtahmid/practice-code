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

void code() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        code();
        cout << endn;
    }
    
    return 0;
}