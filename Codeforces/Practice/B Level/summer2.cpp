#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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

    int n, f;
    cin >> n >> f;

    vector <vector<long long int>> a(n, vector <long long int> (2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
        
    }

    vector <vector<long long int>> good(n, vector <long long int> (2));

    for (int i = 0; i < n; i++)
    {
        if (2*a[i][0]>a[i][1])
        {
            good[i][0] = a[i][1];
        }
        else
        {
            good[i][0] = 2*a[i][0];
        }
        
        good[i][1] = i;
    }

    sort(all (good));

    vector <bool> used(n, 0);

    long long int sum=0;
    
    for (int i = good.size()-1; i > good.size()-1-f; i--)
    {
        sum+=good[i][0];
        used[good[i][1]] = 1;

        // cout << good[i][0] << " " << good[i][1] << " " << used[good[i][1]] << endn;
    }

    for (int i = 0; i < n; i++)
    {
        if (!used[i])
        {
            if (a[i][0]>a[i][1])
            {
                sum += a[i][1];
            }
            else
            {
                sum += a[i][0];
            }
            // cout << a[i][0] << " " << a[i][1] << endn;
        }
        
    }

    cout << sum << endn;
    
    

    return 0;
}