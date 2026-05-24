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

int code() {
    vector <string> target(10);
    for (int i = 0; i < 10; i++)
    {
        // string s;
        cin >> target[i];
        // target[i].pb(s);
    }
    vint x;
    vint y;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (target[i][j]=='X')
            {
                x.pb(j);
                y.pb(i);
            }
            
        }
        
    }

    int count=0;
    for (int i = 0; i < x.size(); i++)
    {
        if ((x[i]>=0 && y[i]==0) || (x[i]==0 && y[i]>=0) || (x[i]>=0 && y[i]==9) || (x[i]==9 && y[i]>=0))
        {
            count++;
        }
        else if ((x[i]>=1 && y[i]==1) || (x[i]==1 && y[i]>=1) || (x[i]>=1 && y[i]==8) || (x[i]==8 && y[i]>=1))
        {
            count+=2;
        }
        else if ((x[i]>=2 && y[i]==2) || (x[i]==2 && y[i]>=2) || (x[i]>=2 && y[i]==7) || (x[i]==7 && y[i]>=2))
        {
            count+=3;
        }
        else if ((x[i]>=3 && y[i]==3) || (x[i]==3 && y[i]>=3) || (x[i]>=3 && y[i]==6) || (x[i]==6 && y[i]>=3))
        {
            count+=4;
        }
        else if ((x[i]>=4 && y[i]==4) || (x[i]==4 && y[i]>=4) || (x[i]>=4 && y[i]==5) || (x[i]==5 && y[i]>=4))
        {
            count+=5;
        }
        
    }

    return count;

}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    vint ans;

    for (int i = 0; i < t; i++)
    {
        ans.pb(code());
    }

    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
    
    

    return 0;

}