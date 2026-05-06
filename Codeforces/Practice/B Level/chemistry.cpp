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

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code() {
    int n, k; 
    cin >> n >> k;
    string s;
    cin >> s;

    vint chars;

    sort(all(s));
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i]!=s[i+1])
        {
            chars.pb(count);
            count=0;
        }

        count++;
        
    }
    
    if (s[n-2]!=s[n-1])
    {
        chars.pb(1);
    }

    sort(all(chars));

    // for (int i = 0; i < chars.size(); i++)
    // {
    //     if (chars[i]%2!=0)
    //     {
    //         /* code */
    //     }
        
    // }
    


    if ((n-k)%2==0)
    {
        while (int i=0, (k!=0 || odd))
        {
            if (chars[i%chars.size()]%2!=0)
            {
                chars[i%chars.size()]
            }
            
        }
        
        
    }
    else
    
    
    
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