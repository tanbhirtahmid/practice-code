// A. 1-1
//link: https://codeforces.com/contest/2207/problem/0
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    int n;
    cin >> n;
    
    // Main logic goes here
    string s; cin >> s;
    int maximum=0;
    int minimum=0;
    int currentCount = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            currentCount++;
        }
    }
    
    // 0 -> 1
    for(int i=1; i<n-1; i++){
        if(s[i-1] == '1' && s[i+1] == '1'){
            if(s[i] == '0') s[i] = '1';
        }
    }

    
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            maximum++;
        }
    }
    maximum = max(maximum, currentCount);

    // 1 -> 0
    for(int i=1; i<n-1; i++){
        if(s[i-1] == '1' && s[i+1] == '1'){
            if(s[i] == '1') s[i] = '0';
        }
    }

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            minimum++;
        }
    }
    
    minimum = min(currentCount, minimum);

    cout << minimum << " " << maximum;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while (t--) {
    //    solve();
    //}
    
    solve();

    return 0;
}
