#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // declare and input part

    string scale; cin >> scale;
    string s; cin >> s;
    long long int left=0, right=0;

    // check how many are there in both sides

    bool end = 0;

    for (int i = 0; i < scale.size(); i++)
    {
        if (scale[i]=='|')
        {
            end=1;
        }
        
        if (!end && scale[i]!='|')
        {
            left++;
        }
        if (end && scale[i]!='|')
        {
            right++;
        }
    }

    int nl, nr;

    nl=left; nr= right;

    bool diditgo=false;

    for (int i = 0; i < s.size(); i++)
    {
        if (nl>nr)
        {
           nr++;
           scale.pb(s[i]);
           diditgo=true;
        }
        else if (nl<nr)
        {
            nl++;
            scale.insert(scale.begin(), s[i]);
            diditgo=true;
        }
        else if (nl==nr)
        {
            nr++;
            scale.pb(s[i]);
        }
        
        
    }
    




    if (!(nl==nr) || !diditgo)
        {
            cout << "Impossible";
            // exit(0);
        }
    else cout << scale;
    

    return 0;

}