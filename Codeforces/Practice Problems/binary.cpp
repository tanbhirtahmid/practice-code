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
#define all(x) (x).begin(), (x).end()

int code() 
{
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
        return 1;
    }
    else if (check>0)
    {
        count.pb(check);
    }
    
    

    if (count.empty()) return 0;

    return *max_element(all(count));
    
}

int main() 
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    // vint ans;
    // for (int i = 0; i < t; i++)
    // {
    //     ans.pb(code());
    // }

    // for (int i = 0; i < t; i++)
    // {
    //     // cout << ans[i] << "\n";
    //     cout << code() << endl;
    // }

    while (t--)
    {
        cout << code() << "\n";
    }
    
    
    return 0;
}