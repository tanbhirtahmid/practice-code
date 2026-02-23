#include <iostream>
using namespace std;

int main () {
    int n, solve;
    cin >> n;
    int count =0;
    int p[n][3];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> p[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum+=p[i][j];
        }
        if (sum>=2)
            {
                count++;
            }
            sum=0;
        
    }

    cout << count;
    
}