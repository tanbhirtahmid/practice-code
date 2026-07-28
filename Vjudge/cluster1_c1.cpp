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

    long long int n, m;
    long long int k;

    cin >> n >> m >> k;

    vector <long long int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // vector <bool> x(m, 1);

    long long int count=0;

    sort(all(a));

    sort(all(b));
    int i=0, j=0;
    while (i<n && j<m)
    {
         if ((a[i]-k)<=b[j] && b[j]<=(a[i]+k))
        {
        //   x[j]=0;
            i++;
            j++;
            count++;
            break;  
        }
        else if (condition)
        {
            /* code */
        }
        
    }
    
    
    cout << count;
    
    

    return 0;
}