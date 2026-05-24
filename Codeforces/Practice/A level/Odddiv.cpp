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

void openfile()
{
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
}

int code() {
    
    long long n;
    cin >> n;

    if (n%2!=0 && n!=1)
    {
        cout << "YES" << endn;
        return 0;
    }
    else
    {
        for (long long int i = n/2; i!=0 ; i=i/2)
        {
            if(i%2!=0 && i!=1)
            {

                cout << "YES" << endn;
                return 0;

            }
        }
        
    }

    cout << "NO" << endn;
    return 0;
    
    
}

int main() {
    fastIO();
    // openfile();

    int t;
    cin >> t;
    while (t--) 
    {
        code();
    }

    return 0;
}