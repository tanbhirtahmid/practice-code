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

    int n;
    cin >> n;
    vector <string> name(n);

    set <string> s;

    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    // s.insert(name[0]);
    vint count;

    // cout << "OK" << endn;

    auto it = s.begin();

    int j;
    
    for (int i = 0; i < n; i++)
    {
        bool num = 1;
        for (j = 0; j < s.size(); j++)
        {
            int cap = s.size();
            it = next(s.begin(), j);
            if(name[i]==*it)
            {
                num = 0;
                count[j]++;
                break;
            }
        }

        if(num)
        {
            cout << "OK";
            s.insert(name[i]);
            count.pb(0);
        }
        else
        {
            cout << name[i];
            if(count[j]>0) cout << count[j];
        }

        cout << endn;
        
    }
    
    

    return 0;
}