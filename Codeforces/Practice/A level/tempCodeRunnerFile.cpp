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

    int n; cin >> n;
    vector <vector<int>> a(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
        
    }
    sort(all(a));

    bool it=0;

    for (int i = 1; i < n; i++)
    {
        if (a[0][0]<a[i][0] &&a[0][1]>a[i][1] )
        {
            it = 1;
            break;
        }
        else if (a[i][0]==a[i][1])
        {
            it = 1; 
            break;        }
        
        
    }

    if (it)
    {
        cout << "Happy Alex";
    }
    else cout << "Poor Alex";
    

    // for (int i = 0; i < n; i++)
    // {
    //         cout << a[i][0] << " " << a[i][1] << endn;
        
    // }11
    
    

    return 0;
}