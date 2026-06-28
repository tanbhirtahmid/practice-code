#include <bits/stdc++.h>
using namespace std;

using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;

#define endn '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code() {
    int n; cin >> n;
    string s; cin >> s;
    set <char> r;
    for (int i = 0; i < n; i++)
    {
        r.insert(s[i]);
    }

    // for (auto i = r.begin(); i != r.end(); i++)
    // {
    //     cout << *i ;
    // }

    // cout << endn;
    
    
    for (int i = 0; i < n; i++)
    {
        auto it = r.begin();
        for (int j = 0; j < r.size(); j++)
        {
            it = next(r.begin() , j);
            if (s[i] == *it)
            {
                it = next(r.begin() , (r.size()-1-j));
                // cout << s[i] << *it << endn;
                s[i] = *it;
                // cout << s[i] << endn;
                break;
            }
            
        }
        
    }

    cout << s << endn;
    
    
    
}

int main() {
    fastIO();

    int t;
    cin >> t;
    while (t--) {
        code();
    }

    return 0;
}