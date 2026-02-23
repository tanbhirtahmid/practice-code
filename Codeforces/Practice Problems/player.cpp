#include <iostream>
using namespace std;

int main () {
    int n, guest=0;
    cin >> n;
    int uni[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> uni[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j==0)
            {
                for (int k = i+1; k < n; k++)
                {
                    if (uni[i][j]==uni[k][1])
                {
                    guest++;
                }
                }
                
                
            }
            else if (j==1)
            {
                for (int k = i+1; k < n; k++)
                {
                    if (uni[i][j]==uni[k][0])
                {
                    guest++;
                }
                }
            }
            
            
        }

        
        
    }

    cout << guest;
    return 0;
}