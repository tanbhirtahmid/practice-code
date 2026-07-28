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

    int n, w, h;
    cin >> n >> w >> h;
    vector <vector<int>> env(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        cin >> env[i][0] >> env[i][1];
        env[i][2] = i+1;
    }

    sort(all(env));

    for (int i = 0; i < n; i++)
    {
        cout << env[i][0] << " " << env[i][1] << " " << env[i][2] << endn;
    }
    
    cout << "----------------------" << endn;

    int p=-1;
    
    vint order;

    for (int i = 0; i < n; i++)
    {
        if(w<env[i][0] && h< env[i][1])
        {
            p = i;
            order.pb(env[i][2]);
            break;
        }
    }

    if(p == -1)
    {
        cout << 0 << endn;
        return 0;
    }


    for (int i = p; i < n; i++)
    {
        cout << env[i][0] << " " << env[i][1] << " " << env[i][2] << 'i' << i << endn;

        while(p < n)
        {
            if(env[i][0]<env[p][0] && env[i][1] < env[p][1])
            {
                cout << env[p][0] << " " << env[p][1] << " " << env[p][2] << 'p' << p << endn;
                order.pb(env[p][2]);
                i = p-1;
                break;
            }
            p++;
        }
    }

    cout << "----------------------" << endn;

    cout << order.size() << endn;

    for (int i = 0; i < order.size(); i++)
    {
        cout << order[i] << " ";
    }
    


    return 0;
}