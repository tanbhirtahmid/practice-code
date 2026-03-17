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
#define all(x) (x).begin(), (x).end()


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>='5')
        {
            s[i]=('9'-s[i])+'0';
            if (s[0]=='0')
        {
            s[0]='9';
        }
        }
        
        
    }

    cout << s;
    

    return 0;

}