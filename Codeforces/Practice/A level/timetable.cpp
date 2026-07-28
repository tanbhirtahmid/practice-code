#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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

    string s; cin >> s;
    // long long int num = stoll(s, nullptr, 2);
    // cout << ceil(log(num)/log(4));
    if (count(all(s), '1')==1 | count(all(s), '1')==0)
    {
        if (s.size()%2==0)
        {
            cout << ceil(((double)s.size()/2));
        }
        else
        cout << (s.size()-1)/2;
    }
    else cout << ceil(((double)s.size()/2));

    return 0;
}