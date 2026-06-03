#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, count=0;
    cin >> n;
    vector <int> stew(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stew[i];
    }

    int maxi=*max_element(stew.begin(), stew.end());
    int mini=*min_element(stew.begin(), stew.end());
    for (int i = 0; i < n; i++)
    {
        if (mini<stew[i] && maxi>stew[i])
        {
            count++;
        }
        
    }

    cout << count;
    return 0;
    
    
}