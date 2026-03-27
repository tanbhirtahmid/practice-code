#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;

#define endn '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

void code() {
    int n; cin >> n;
    string s; cin >> s;
    int count=0;
    // int maxi=-1;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i]=='R')
    //     {
    //         count++;
    //     }
    //     else if (s[i]=='L')
    //     {
    //         count--;
    //     }
    //     maxi=max(maxi, count);
    // }

    for (int i = 0; i < s.size(); i++)
    {
        count++;
        if (s[i]=='L')
        {
            break;
        }
    }

    cout << count << endn;
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        code();
    }
    
    return 0;
}