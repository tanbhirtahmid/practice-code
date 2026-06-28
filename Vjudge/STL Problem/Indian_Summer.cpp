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
    cin.ignore();
    set <string> s;

    string tree;
    for (int i = 0; i < n; i++)
    {
        getline(cin, tree);
        s.insert(tree);
    }

    cout << s.size() << endn;
    
    

    return 0;
}