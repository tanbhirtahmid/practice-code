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
#define all(x) (x).begin(), (x).end()


int main() {
    int t;
    cin >> t;
    vint n(t);
    vstring bins(t);
    vstring current1;
    vstring current2;

    // input part
    for (int i = 0; i < t; i++)
    {
        cin >> n[i] >> bins[i];
        current1.pb(bins[i]);
        current2.pb(bins[i]);
    }

    // calculating the maximum
    
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < bins[i].size()-1; j++)
        {
            if (j!=0 && bins[i][j-1]=='1' && bins[i][j+1]=='1' )
            {
                bins[i][j]='1';
                current2[i][j]='1';
            }
            
        }
        
    }

    // calculating the possible minimum

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < current2[i].size()-1; j++)
        {
            if (j!=0 && current2[i][j-1]=='1' && current2[i][j+1]=='1' )
            {
                current2[i][j]='0';
            }
            
        }
        
    }

    // safety check

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < current1[i].size()-1; j++)
        {
            if (j!=0 && current1[i][j-1]=='1' && current1[i][j+1]=='1' )
            {
                current1[i][j]='0';
            }
            
        }
        
    }

    // int maxi = count(all(bins), '1');

    for (int i = 0; i < t; i++)
    {
        if (count(all(current1[i]), '1')<count(all(current2[i]), '1'))
        {
            cout << count(all(current1[i]), '1') << " " << count(all(bins[i]), '1') << endl;
        }
        else
         cout << count(all(current2[i]), '1') << " " << count(all(bins[i]), '1') << endl;
        
    }

    

    return 0;

}