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
    int n, m; cin >> n >> m;
    vector <vector<char>> color(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> color[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
        {
            sort(color[i].begin(), color[i].end());
            if (binary_search(color[i].begin(), color[i].end(), 'C') || binary_search(color[i].begin(), color[i].end(), 'M') || binary_search(color[i].begin(), color[i].end(), 'Y'))
            {
                cout << "#Color";
                exit(0);
            }
            
        }

        cout << "#Black&White";
    

    
    

    return 0;

}