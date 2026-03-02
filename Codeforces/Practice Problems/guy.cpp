#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int n; cin >> n; cin.ignore();
    string p, q;
    getline(cin, p); getline(cin, q);
    sort(all(p)); sort(all(q));
    p.erase(remove(p.begin(), p.end(), ' '), p.end());
    q.erase(remove(q.begin(), q.end(), ' '), q.end());
    // cout << p;
    // if (p[p.size()-1]=='5')
    // {
    //     cout << "wow";
    // }
    vchar clev;
    vint level(n, 0);
    for (char i = '1'; i <= n+48; i++)
    {
        clev.pb(i);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i]==clev[j])
            {
                level[j]++;
            }
            if (q[i]==clev[j])
            {
                level[j]++;
            }
        }
        
        
    }

    for (int i = 0; i < n; i++)
    {
        if (level[i]==0)
        {
            cout << "Oh, my keyboard!";
            exit(0);
        }
        
    }
    cout << "I become the guy.";

    
    

    return 0;

}