#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    long long int n;
    cin >> n;
    vector<int> x(n);
    vector<vector<int>> d(n, vector<int>(n, 0));
    vector<vector<int>> ans(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d[i][j]=abs(x[j]-x[i]);
        }
        
    }

    

    for (int i = 0; i < n; i++)
    {
        d[i].erase(remove(d[i].begin(), d[i].end(), 0), d[i].end());
        ans[i][0]=*min_element(d[i].begin(), d[i].end());
        ans[i][1]=*max_element(d[i].begin(), d[i].end());
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }


    return 0;


}