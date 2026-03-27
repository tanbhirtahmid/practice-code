#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int t, o; cin >> t;
    vint n(t);
    vint x(t);
    vint fuel;
    vint left;
    vector <vector<int>> a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i] >> x[i];
        // fuel.pb(x[i]-n[i]);
        for (int j = 0; j < n[i]; j++)
        {
            cin >> o;
            a[i].pb(o);
        }
        
    }
    int sum=0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n[i] ; j++)
        {
            if (j==0)
            {
                fuel.pb(a[i][j]);
            }
            if (j!=a[i].size()-1)
            {
                fuel.pb(a[i][j+1]-a[i][j]);
            }
            else
            fuel.pb((x[i]-a[i][a[i].size()-1])*2);
            
            
        }
        sum=*max_element(all(fuel));
        left.pb(sum);
        fuel.erase(all(fuel));
    }

    for (int i = 0; i < left.size(); i++)
    {
        cout << left[i] << endl;
    }
    
    
    

    return 0;

}