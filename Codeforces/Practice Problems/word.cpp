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
    string s; cin >> s;
    vchar alpha; vchar bet;
    for (int i = 0; i < 26; i++)
    {
        alpha.pb(i+65);
        bet.pb(i+97);
    }

    int high=0, low = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>=97 && s[i]<=122)
        {
            low++;
        }
        else high++;
    }

    if (high>low)
    {
        for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>=65 && s[i]<=90)
        {
            cout << s[i];
        }
        else
        {
            auto it = find(all(bet), s[i]);
            int post = it - bet.begin();
            cout << alpha[post];
        }
        
    }
    }
    else
    {
         for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>=97 && s[i]<=122)
        {
            cout << s[i];
        }
        else
        {
            auto it = find(all(alpha), s[i]);
            int post = it - alpha.begin();
            cout << bet[post];
        }
        
    }
    }
    
    


    
    

    return 0;

}