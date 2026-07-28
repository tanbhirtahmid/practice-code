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
    for (int i = 0; i+2 < n; i++)
    {

        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
        {
            cout << 2 << endn;
            return;
        }
    }

    cout << count(all(s), '.') << endn;
    

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