#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long  int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    int numR = count(all(s), 'R');
    int numL = count(all(s), 'L');

    // auto it1 = find(all(s), 'R');
    // auto it2 = find(all(s), 'L');

    int it1 = s.find('R');
    int it2 = s.find('L');

    int posL, posR;
    if (numL==0 && !(numR==0))
    {
         for (int i = 0; i < s.size(); i++)
            {
                if (s[i]=='R')
                {
                    posR=i;
                } 
            }

            cout << it1+1 << " " << posR+2;

    }
    else if (numR==0 && !(numL==0))
    {
         for (int i = 0; i < s.size(); i++)
            {
                if (s[i]=='L')
                {
                    posL=i;
                } 
            }

            cout << posL+1 << " " << it2;

    }
    else if (numL==numR)
    {
        if (it2>it1)
        {
            cout << it1+1 << " " << it1+2; 
        }
        else cout << it2+1 << " " << it2+2;
    }
    else {
    for (int i = 0; i < s.size(); i++)
            {
                if (s[i]=='L')
                {
                    posL=i;
                }
                if (s[i]=='R')
                {
                    posR=i;
                } 
            }

    if (numL>numR)
    {
        if (it2>it1)
        {
            
            cout << posL+1 << " " << posR+2;
        }
        // else cout << posR+1 << " " << posL+2;

    }
    if (numL<numR)
    {
        if (it2>it1)
        {
            
            cout << it1+1 << " " << it2;
        }
        else cout << it2+1 << " " << it1;

    }

    }
    

    return 0;

}