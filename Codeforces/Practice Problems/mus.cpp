#include <iostream>
using namespace std;

int main () {
    int big, low, p, p1, p2, result=0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (i==0)
        {
            big=s[i];
            low='a';
        }
        else if (s[i]==max(s[i-1], s[i]))
        {
            big=s[i];
            low=s[i-1];
        }
        else if (s[i]==min(s[i-1], s[i]))
        {
            big=s[i-1];
            low=s[i];
        }
        // else if (s[i]=s[i-1])
        // {
        //     big=s[i-1];
        //     low=s[i];
        // }
        
        p1 = big -low;
        p2 = 26-big+low;
        p= min(p1, p2);
        result+=p;
        
    }

    cout << result << '\n';
    
}