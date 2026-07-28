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
    string s; cin >> s;
    vector <bool> arr(s.size(), 1);
    int big = 0, small = 0;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (big > 0 && ('A' <= s[i] && s[i] <='Z' && s[i]!='B'))
        {
            arr[i]=0;
            big--;
        }
        else if (small > 0 && ('a' <= s[i] && s[i] <='z' && s[i]!='b'))
        {
            arr[i]=0;
            small--;
        }
        else if(s[i]=='B')
        {
            arr[i]=0;
            big++;
        }
        else if(s[i]=='b')
        {
            arr[i]=0;
            small++;
        }
        
        
    }

    for (int i = 0; i < s.size(); i++)
    {
        if(arr[i]) cout << s[i];
    }
    
    cout << endn;
    
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