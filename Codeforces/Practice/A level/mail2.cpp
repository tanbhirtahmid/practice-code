#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, a, b;
    int mini, maxi;
    cin >> n;
    vector<int> x(n);
    // vector<int> d;
    // vector<vector<int>> ans(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            a=abs(x[i+1]-x[i]);
            mini =a;
        }
        else if(i==x.size()-1) {
            b=abs(x[i-1]-x[i]);
            mini = b;
        }
        else {

            a=abs(x[i+1]-x[i]);
        b=abs(x[i-1]-x[i]);
        
        mini=min(a, b);

        }

        a=abs(x[0]-x[i]);
        b=abs(x[n-1]-x[i]);

        maxi=max(a,b);
        cout << mini << " " << maxi << endl;
    }


    return 0;


}