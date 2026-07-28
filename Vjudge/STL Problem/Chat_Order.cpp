#include <bits/stdc++.h>
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

    int n; cin >> n;

    vector <string> names(n);

    unordered_set <string> order;
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    for(int i = names.size()-1; i >= 0; i--) order.insert(names[i]);


    for (int i = order.size()-1; i>=0; i--)
    {
        auto it = next(order.begin(), i);
        cout << *it << endn;
    }
    
    

    return 0;
}