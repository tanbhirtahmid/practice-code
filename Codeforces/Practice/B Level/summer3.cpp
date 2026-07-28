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

    long long int sum = 0;

    vllint extra;

    for (int i = 0; i < n; i++)
    {
        int x, y;

        if (2*a[i][0]>a[i][1])
        {
            x = a[i][1];
        }
        else
        {
            x = 2*a[i][0];
        }

        if (a[i][0]>a[i][1])
        {
            sum += a[i][1];
            y = a[i][1];
        }
        else
        {
            sum += a[i][0];
            y = a[i][0];
        }

        extra.pb(x-y);
    }

    sort(all(extra), greater <long long int> ());

    for (int i = 0; i < f; i++)
    {
        sum+=extra[i];
    }

    cout << sum << endn;

    return 0;
}