#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, count=0; cin >> n;
    string s; cin >> s;
    vector <char> small;
    vector <char> big;
    vector <int> num(26, 0);
    for (int i = 0; i < 26; i++)
    {
        small.push_back(i+97);
        big.push_back(i+65);
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << small[i] << " \n" << big[i] << " \n";
    // }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i]==small[j] || s[i]==big[j]) num[j]++;
        
        }
        
        
    }
    for (int i = 0; i < 26; i++)
    {
        if(num[i]>0) count++;
    }

    if (count==26)
    {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
    
}