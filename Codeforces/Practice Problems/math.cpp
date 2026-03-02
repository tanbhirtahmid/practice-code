#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    string s;
    cin >> s;

    sort(s.begin(),s.end());

    int n=((s.size()-1)/2);

    for (int i = n; i < s.size(); i++)
    {
        cout << s[i];
        if (i <s.size()-1)
        {
            cout << "+";
        }
        
    }
    
    return 0;
}