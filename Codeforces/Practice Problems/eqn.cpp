#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int m, n;
    cin >> n >> m;
    int count=0;
    int p=max(n,m);
    for (int i = 0; i<=p; i++)
    {
        for (int j = 0; j <=p; j++)
        {
            if ((i*i)+j==n && i+(j*j)==m)
            {
                count++;
            }
            
        }
    }
     cout << count;
     return 0;
    
}