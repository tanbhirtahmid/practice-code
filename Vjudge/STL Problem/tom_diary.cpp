#include <bits/stdc++.h>
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

    int n;
    cin >> n;
    vector <string> nm;
    // set <string> un_nm;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        nm.pb(s);
        // un_nm.insert(s);
    }
    
    vector <bool> yeah(n, 0);

    auto it = nm.rbegin();

    for (int i = 0; i < n; i++)
    {
        auto jt = it+1;
        for (int j = 0; j < n-i; j++)
        {
            if(*it==*jt)
            {
                *(yeah.rbegin()+i)=1;
                break;
            }
            jt++;
        }
        it++;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << ((yeah[i]) ? "YES" : "NO") << endn;
    }
    
    

    return 0;
}