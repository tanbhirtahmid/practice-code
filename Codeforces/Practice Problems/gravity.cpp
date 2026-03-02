#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> init(n);

    for (int i = 0; i < n; i++)
    {
        cin >> init[i];
    }

    int a = *max_element(init.begin(),init.end());

    vector <vector<int>> final(a, vector <int> (n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < init[i]; j++)
        {
            final[j][i]=1;
        }
        
        
    }
    for (int i = 0; i < a; i++)
    {
        sort(final[i].begin(), final[i].end());
    }
    
    int total=0;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < a; j++)
        {
            total+=final[j][i];
        }
        cout << total << " ";
        total=0;
            
    }
    
    

    // cout << a;
    return 0;
    
}