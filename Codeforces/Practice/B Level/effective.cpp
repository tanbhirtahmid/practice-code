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

int main() {
    fastIO();

    int n, m; 
    
   cin >> n;

    vector <vector<int>>  a(n, vector<int> (2) ); 

    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
        a[i][1]=i;
    }
    sort(all(a));

    cin >> m;

    // vint b(m);

    long long int vs=0, pt=0;

    for (int i = 0; i < m; i++)
    {
        // cin >> b[i];

        int num;
        cin >> num;
        
        vs+=a[num-1][1]+1;
        pt+=n-a[num-1][1];
    }
    

    // for (int i = 0; i < m; i++)
    // {
    //     // My first aproach, but hit time limit on test 6
    //     /***************************************/
    //     // for (int j = 0; j < n; j++)
    //     // {
    //     //     vs++;
    //     //     if (a[j]==b[i])
    //     //     {
    //     //         break;
    //     //     }
            
    //     // }

    //     // for (int j = n-1; j > -1; j--)
    //     // {
    //     //     pt++;
    //     //     if (a[j]==b[i])
    //     //     {
    //     //         break;
    //     //     }
            
    //     // }
    //     /***************************************/

    //     // My second aproach but hit time limit on test 7
    //     /***************************************/

    //     // auto it = find(all(a), b[i]);
    //     // int dis=distance(a.begin(), it);
    //     // vs+=dis+1;
    //     // pt+=n-dis;

    //     /***************************************/

        
    // }

    cout << vs << " " << pt;
    
    

    return 0;
}