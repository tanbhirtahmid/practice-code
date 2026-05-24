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
#define all(x) (x).begin(), (x).end()


int main() {
    long int n, m; cin >> n >> m;
    long int mini = min(m, n);
    long int maxi= max(m, n);
    long int counting = 0;
    for (int i = 1; i < mini+1; i++)    
    {

        for (int j = 0; j <= m+n; j+=5)
        {
            if (j>=5 && (j-i)<=maxi)
            {
                counting++;
            }
            
        }

        /* for (int j = 1; j < maxi+1; j++)
        {
            if ((i+j)%5==0)
            {
                counting++;
            }
            
        } */
    }

    cout << counting;

    return 0;

}