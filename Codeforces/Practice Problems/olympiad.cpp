#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <vector<int>> like(n, vector<int>(2,0));
    for (int i = 0; i < n; i++)
    {
        cin >> like[i][0];
        like[i][1]=(i+1);
    }

    sort(like.begin(), like.end());

    vector <int> added1;
    vector <int> added2;
    vector <int> added3;

    for (int i = 0; i < n; i++)
    {
        if (like[i][0]==1)
        {
            added1.push_back(like[i][1]);
        }
        if (like[i][0]==2)
        {
            added2.push_back(like[i][1]);
        }
        if (like[i][0]==3)
        {
            added3.push_back(like[i][1]);
        }
        
    }

    int x=min(added1.size(), min(added2.size(), added3.size()));

    cout << x << endl;
    

    for (int i = 0; i < x; i++)
    {
        cout << added1[i] << " " << added2[i] << " " << added3[i] << endl;
    }

    
    

    
        
}