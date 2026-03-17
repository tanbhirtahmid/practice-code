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


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    vint a(n);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=a[k-1] && a[i]!=0)
        {
            count++;
        }
    }
    

    cout << count;
    

    return 0;

}