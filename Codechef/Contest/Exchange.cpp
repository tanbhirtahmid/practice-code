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
    int n, k;
    cin >> n >> k;
    vint a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int red, blue;
    for (int x = 0; x <= k; x++)
    {
        bool okay = 0;
        red=x;
        blue = k-x;
        for(int j = 0; j < n; j++)
        {
            red+=a[j];
            blue-=a[j];
            
            if(red<0 || blue<0)
            {
                okay = 0;
                break;
            }
            
            okay = 1;
        }

        if(okay)
        {
            cout << "Yes" << endn;
            return;
        }
            
    }

    cout << "No" << endn;
    
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