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
    int n;
    cin >> n;

    string s;

    cin >> s;

    int first;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='B')
        {
            first = i;
            break;
        }
    }
    

    reverse(all(s));

    int last;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='B')
        {
            last = s.length()-i;
            break;
        }
    }

    cout << last-first << endn;
    
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