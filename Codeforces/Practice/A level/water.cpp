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


int main() {
    int t; cin >> t;
    vint n(t);
    vllint h(t);
    vector <vector <long long int>> a(t);
    
    for (int i = 0; i < t; i++)
    {
        cin >> n[i] >> h[i];
        for (int i = 0; i < n[i]; i++)
        {
            int x;
            cin >> x;
            a[i].pb(x);
        }
        
    }
    

    return 0;

}