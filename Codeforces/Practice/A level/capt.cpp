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


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    for (int i = 0; i < 26; i++)
    {
        if (s[0]==i+'a')
        {
            s[0]=i+'A';
            break;
        }
        
    }

    cout << s;
    

    return 0;

}