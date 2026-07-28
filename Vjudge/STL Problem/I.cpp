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
bool check(vector <long long int> a, string s)
{
    if(a.size()!=s.size()) return 0;
    
    vector <long long int> alpha(26);
    vector <bool> seen(26, 0);
    // cout << s << endn;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int n = s[i]-'a';
        if(seen[n] && alpha[n]!=a[i])
        {
            return 0;
        }
        else{
            alpha[n]=a[i];
            seen[n]=1;
            count++;
        }
    }

    set <long long int> r(alpha.begin(), alpha.end());
    if(r.size()!=count+1) return 0;



    return 1;
    
}

void code() {
    int n;
    cin >> n;

    vector <long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if(check(a, s)) cout << "YES" << endn;
        else cout << "NO" << endn;
    }  
    
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