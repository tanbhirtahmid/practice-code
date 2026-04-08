#include <iostream>
#include <vector>
using namespace std;

int main () {
    int mat[5][5];
    // vector <vector<int>> mat(5, vector<int>(5,0));
    int a, b, count=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
        
    }


        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j]==1)
            {
                a=i;
                b=j;
                break;
            }
            
        }
        
    }

    while (a!=2 || b!=2)
    {
        
        if(a<2){
            a++;
            count++;
        }

        else if (a>2)
        {
            a--;
            count++;
        }

        else if (b<2)
        {
            b++;
            count++;
        }

        else if (b>2)
        {
            b--;
            count++;
        } 
    }
    
    cout << count;
    return 0;
    
}