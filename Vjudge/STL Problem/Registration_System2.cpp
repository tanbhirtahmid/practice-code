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

    vstring s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    set <string> r;

    for (int i = 0; i < n; i++)
    {
        int p = r.size();
        r.insert(s[i]);
        if(r.size()>p)
        {
            cout << "OK";
        }
        else
        {
            
        }
    }
    
    

    return 0;
}