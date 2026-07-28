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
    vint arr(n);
    vint arrsort;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arrsort.pb(arr[i]);
    }
    sort(all(arrsort));
/*     vint newarr;
    vint newarrsort;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arrsort[i])
        {
            newarr.pb(arr[i]);
            newarrsort.pb(arr[i]);
        }
        
    }
    erase(all(arrsort));
    sort(all(newarrsort));
    for (int i = 0; i < newarr.size(); i++)
    {

    } */
    
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        code();
    }
    
    return 0;
}