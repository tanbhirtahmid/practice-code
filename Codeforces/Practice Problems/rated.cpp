#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int n; cin >> n;
    vint before(n); vint after(n);
    for (int i = 0; i < n; i++)
    {
        cin >> before[i] >> after[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (before[i]!=after[i])
        {
            cout << "rated";
            exit(0);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(i==n-1) break;
        if (before[i]<before[i+1])
        {
            cout << "unrated";
            exit(0);
        }
        
    }
    cout << "maybe";
    
    

    return 0;

}