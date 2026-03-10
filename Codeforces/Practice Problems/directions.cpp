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


string formula( string pos)
{
    int x=0, y=0;
    for (int i = 0; i < pos.size(); i++)
    {
        if (pos[i]=='U')
        {
            y++;
        }
        else if (pos[i]=='D')
        {
            y--;
        }
        else if (pos[i]=='R')
        {
            x++;
        }
        else if (pos[i]=='L')
        {
            x--;
        }


        if (x==1 && y==1)
        {
            return "YES";
        }  
        
    }

    return "NO";
    
}

int main() {
    int t; cin >> t;
    vstring ans;
    for (int i = 0; i < t; i++)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        ans.pb(formula(s));

    }

    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    
    

    return 0;

}