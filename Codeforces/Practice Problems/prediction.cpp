#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int n, m, sum=0; cin >> n >> m;
    for (int i = 2; i < m; i++)
    {
        if (m%i==0)
        {
            cout << "NO";
            exit(0);
        }
        
    }
    
    for (int i = n+1; i < m; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                sum++;
                break;
            }
            
        }
        
    }
    
    if(n+1+sum==m) cout << "YES";
    else cout << "NO";

    return 0;

}