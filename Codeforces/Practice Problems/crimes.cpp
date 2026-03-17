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

    int n, m; cin >> n >> m;
    vector <vector<char>> map(n, vector<char>(m));
    vint x, y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if (map[i][j]=='*')
            {
                y.pb(i+1);
                x.pb(j+1);
            }
        }
        
    }


 /*    for (int i = 0; i < 3; i++)
    {
        cout << y[i] << " " << x[i] << endn;
    } */
    
    int ansy, ansx;

    if (y[0]!=y[1] && y[0]==y[2])
    {
        ansy=y[1];
    }
    else if (y[1]!=y[2] && y[0]==y[1])
    {
        ansy=y[2];
    }
    else if (y[2]!=y[0] && y[2]==y[1])
    {
        ansy=y[0];
    }

    if (x[0]!=x[1] && x[0]==x[2])
    {
        ansx=x[1];
    }
    else if (x[1]!=x[2] && x[0]==x[1])
    {
        ansx=x[2];
    }
    else if (x[2]!=x[0] && x[2]==x[1])
    {
        ansx=x[0];
    }

    cout << ansy << " " << ansx;
    
    

    return 0;

}