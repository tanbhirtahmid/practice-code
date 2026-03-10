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
    int n; cin >> n;
    vstring arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n==1)
    {
        cout << arr[0];
        exit(0);
    }
    
    sort(all(arr));
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    vint team;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
        {
            team.pb(i);
        }
        else if (i+1==n-1)
        {
            team.pb(i+1);
        }
        
        
    }
    vint winner;
    for (int i = 0; i < team.size(); i++)
    {
        if (i==0)
        {
            winner.pb(team[i]);
        }
        else 
        winner.pb(team[i]-team[i-1]);
        
        
    }
    
    int maxi = *max_element(all(winner));
    auto it = find(all(winner), maxi);
    int post = it - winner.begin();
    cout << arr[team[post]];
    

    return 0;

}