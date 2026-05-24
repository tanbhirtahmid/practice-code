#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> d;
    vector<vector<int>> ans(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d.push_back(abs(x[j]-x[i]));
        }
        
        d.erase(remove(d.begin(), d.end(), 0), d.end());
        ans[i][0]=*min_element(d.begin(), d.end());
        ans[i][1]=*max_element(d.begin(), d.end());
        cout << ans[i][0] << " " << ans[i][1] << endl;
        d.erase(d.begin(), d.end());
        
    }


    return 0;


}