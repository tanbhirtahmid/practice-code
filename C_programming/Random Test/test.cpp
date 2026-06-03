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
    vint bins(n);
    vint count;
    int check=0;
    for (int i = 0; i < n; i++)
    {
        cin >> bins[i];
        if (bins[i]==0)
        {
            check++;
        }
        else if (bins[i]==1)
        {
            count.pb(check);
            check=0;
        }
    }

    if (n==1 && bins[0]==0)
    {
        cout << 1 << endn;
    }
    else if (check>0)
    {
        count.pb(check);
    }
    
    

    if (count.empty()) cout << 0 << endn;
    else
    cout << *max_element(all(count)) << endn;
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