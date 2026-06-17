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
    string s;
    cin >> s;
    
    auto it = s.begin();
    
    if(s.size()==1)
    {
        s.insert(it, *it+1);
        return;
    }

    // int pos = 0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i]==s[i+1])
        {
            // pos = i;
            
            it = it + i + 1;
            break;
        }
        
    }

    s.insert(it, *it+1);

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