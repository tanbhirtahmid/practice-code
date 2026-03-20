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


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <string> paint(4);
    
    for (int i = 0; i < 4; i++)
    {
        cin >> paint[i];
    }

    // char type;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // type = '#';
            if (!(j==3))
            {
                if (!(i==3) && paint[i][j]==paint[i][j+1] && (paint[i][j]==paint[i+1][j+1] || paint[i][j]==paint[i+1][j]))
                {
                    cout << "YES";
                    exit(0);
                }
                else if (!(i==0) && paint[i][j]==paint[i][j+1] && (paint[i][j]==paint[i-1][j] || paint[i][j]==paint[i-1][j+1]))
                {
                    cout << "YES";
                    exit(0);
                }
                
                
            }
            else if (!(j==0))
            {
                if (!(i==3) && paint[i][j]==paint[i][j-1] && (paint[i][j]==paint[i+1][j-1] || paint[i][j]==paint[i+1][j]))
                {
                    cout << "YES";
                    exit(0);
                }
                else if (!(i==0) && paint[i][j]==paint[i][j-1] && (paint[i][j]==paint[i-1][j] || paint[i][j]==paint[i-1][j-1]))
                {
                    cout << "YES";
                    exit(0);
                }
            }
            
            
        }
        
    }

    cout << "NO";
    
    

    return 0;

}