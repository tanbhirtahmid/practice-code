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

    int n, m;
    
    cin >> n >> m;

    vstring org_name(n), org_ip(n), name(m), ip(m);

    for (int i = 0; i < n; i++)
    {
        cin >> org_name[i] >> org_ip[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> name[i] >> ip[i];
        ip[i].erase(ip[i].end()-1);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(ip[i]==org_ip[j])
            {
                cout << name[i] << " " << ip[i] << "; #" << org_name[j] << endn;
                break;
            }
        }
        
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << org_name[i] << org_ip[i];
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << name[i] << ip[i];
    // }
    

    return 0;
}