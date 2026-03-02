#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int n, p, q; 
    vint level;
    cin >> n;
    vint num(n, 0);
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int item;
        cin >> item;
        level.pb(item);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int item;
        cin >> item;
        level.pb(item);
    }
    for (int i = 0; i < level.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (level[i]==j+1)
            {
                num[j]++;
            }
        } 
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i]==0)
        {
            cout << "Oh, my keyboard!";
            exit(0);
        }
        
    }
    cout << "I become the guy.";
    
    

    return 0;

}