#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector <int> a(n-1);

    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    if (a[0]!=1)
    {
        cout << 1;
        return 0;
    }
    
    for (int i = 0; i < n-2; i++)
    {
        if(!(a[i+1]==a[i]+1))
        {
            cout << a[i]+1;
            return 0;
        }
    }

    cout << a[n-2]+1;
    

    
    return 0;
}