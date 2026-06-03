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

    long long int v, n, k, sum=0, i=0; cin >> n >> k;

    v=ceil((float)(n*(k-1))/k);
    
    while (sum<n)
    {
        long long int y=v/pow(k, i);
        // cout << y << endn;
        sum+=y;
        i++;
        if (y==0)
        {
            if (sum>=n)
            {
                break;
            }
            else
            {
                v++;
                sum=0;
                i=0;
            }
            
        }
        
    }
    

    cout << v << endn;


    return 0;
}