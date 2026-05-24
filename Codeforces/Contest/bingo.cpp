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
    int m= n*n;

    bool ok = 1;

    // vector <vector <int>> candy(n, vector <int> (n));
    vint candy(m);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> candy[i][j];
    //     }
        
    // }

    for (int i = 0; i < m; i++)
    {
        cin >> candy[i];
    }
    

    // int sum =0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum+=i;
    // }
    
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (candy[i]==candy[j])
            {
                count++;
            }
            if (m-count<n)
            {
                ok = 0;
                break;
            }
            
            
        }
        
    }

    if (ok)
    {
        cout << "YES" << endn;
    }
    else cout << "NO" << endn;
    
    
    
    
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