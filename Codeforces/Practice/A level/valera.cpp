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
    int n; cin >> n;
    vstring s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    // cout << s[0][0];
    // if (n!=s[0].size())
    // {
    //     cout << "NO";
    //     exit(0);
    // }
    
    
    for (int i = 0; i < n; i++)
    {
        if (s[i][i]!=s[i][s[i].size()-i-1] || s[i][i]!=s[0][0])
        {
            cout << "NO";
            exit(0);
            }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        // s[i].erase(remove(all(s[i]), s[0][0]), s[i].end());
        // sort(all(s[i]));
        for (int j = 0; j < s[i].size()-1; j++)
        {
            if (s[i][j]!=s[i][j+1] && i!=j && (j+1)!=s[i].size()-i-1 && (j)!=s[i].size()-i-1 && i!=j+1)
            {
                cout << "NO";
                // cout << i << j;
                exit(0);
            }
            
        }
        
    }
    int count =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].size()-1; j++)
        {
            if (s[i][j]==s[i][j+1])
            {
                count++;
            }
            
        }
    }
    if (n*(n-1)==count)
    {
        cout << "NO";
    }
    else
    cout << "YES";
    
    
    
    
    return 0;
    
}