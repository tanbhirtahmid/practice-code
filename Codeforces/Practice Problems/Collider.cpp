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

    int n; cin >> n;
    vchar move(n);
    vllint pos(n);
    bool ok = 0;

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> move[i];
    }


    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }

    // check if it will ever colide

    int mini=1;
    bool hasnotrun= true;
    for (int i = 0; i < n-1; i++)
    {
        if (move[i]=='R' && move[i+1]=='L')
        {
            ok = 1;

            if (hasnotrun)
            {
                mini=(pos[i+1]-pos[i])/2;
                hasnotrun=false;
            }
            
            if (mini>(pos[i+1]-pos[i])/2)
            {
                mini=(pos[i+1]-pos[i])/2;
            }
        }
        
    }
    
        
    if (!ok)
    {
        cout << -1;
        exit(0);
    }
    else cout << mini;

    return 0;

}