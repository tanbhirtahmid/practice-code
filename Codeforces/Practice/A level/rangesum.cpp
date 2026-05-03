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

void setIO() // Enables read and write to input and output file respectivly 
{  
#ifndef ONLINE_JUDGE
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
#endif
}

int main() {
    fastIO();
    setIO();
    long long int n, q; cin >> n >> q;
    long long int a[n], b[q][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vllint sum(1);

    for (int i = 0; i < q; i++)
    {
        cin >> b[i][0] >> b[i][1];
    }
    
    sum[0]=0;

    for (int i = 0; i < n; i++)
    {
        sum.pb(sum[i]+a[i]);
    }
    
    for (int i = 0; i < q; i++)
    {
        cout << sum[b[i][1]]-sum[b[i][0]-1] << endn;
    }
    

    return 0;
}