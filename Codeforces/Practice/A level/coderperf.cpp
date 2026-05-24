#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
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
    vint point(n);
    for (int i = 0; i < n; i++)
    {
        cin >> point[i];
    }

    // vector <int> s1;

    // for (int i = 0; i < n-1; i++)
    // {
    //     int diff = abs(point[i+1]-point[i]);
    //     s1.pb(diff);
    // }

    // cout << s1.size();

    // for (auto& x : s1)
    //     cout << x << " ";
    
    int maxi = point[0], mini = point[0], count = 0;

    for (int i = 0; i < n; i++)
    {
        if (point[i]>maxi)
        {
            maxi = point[i];
            count++;
        }
        else if (point[i]<mini)
        {
            mini = point[i];
            count++;
        }
    }

    cout << count;
    
    

    return 0;

}