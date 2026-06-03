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

    string s;
    cin >> s;

    set <char> dis;

    for (int i = 0; i < s.size(); i++)
    {
        dis.insert(s[i]);
    }

    // vint ct;

    auto it = dis.begin();

    for (int i = 0; i < dis.size(); i++)
    {
        int n = count(all(s), *it);

        cout << *it << " : " << n << endn;

        it++;
    }
    
    

    return 0;
}