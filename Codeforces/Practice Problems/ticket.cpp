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
    vstring ticket(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ticket[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (ticket[i][0]+ticket[i][1]+ticket[i][2]==ticket[i][3]+ticket[i][4]+ticket[i][5])
        {
            cout << "YES" << endn;
        }
        else
        cout << "NO" << endn;
        
    }
    

    return 0;

}