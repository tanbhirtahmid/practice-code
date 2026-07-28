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
    vector <long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout << "YES" << endn;
        return;
    }
    if(k==1)
    {
        vector <long long int> a2(a.begin(), a.end());
        sort(a2.begin(), a2.end());
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=a2[i])
            {
                
                cout << "NO" << endn;
                return;
            }
        }
        
    }

    cout << "YES" << endn;
    
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