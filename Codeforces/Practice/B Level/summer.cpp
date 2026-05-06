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
    vllint sold;
    vllint good;

    for (int i = 0; i < n; i++)
    {
        if (2*a[i][0]>a[i][1])
        {
            sold.pb(a[i][1]);
        }
        else
        sold.pb(2*a[i][0]);
        
    }

    sort(all(sold), greater <long long int> ());

    for (int i = 0; i < n; i++)
    {
        if (a[i][0]>a[i][1])
        {
            good.pb(a[i][1]);
        }
        else
        good.pb(2*a[i][0]);
        
    }

    sort(all(good), greater <long long int> ());

    long long int sum=0;

    for (int i = 0; i < f; i++)
    {
        sum+=sold[i];
    }
    
    for (int i = f; i < good.size(); i++)
    {
        sum+=good[i];
    }
    
    cout << sum << endn;

    return 0;
}