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

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fastIO();

    int n; cin >> n;

    int pos=0, neg=0;

    vint ans(n);

    vint odd;

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        if (ans[i]%2==0)
        {
            ans[i]/=2;
            
        }
        else 
        {
            ans[i]/=2;
            odd.pb(i);
        }
        
        if (ans[i]>0)
        {
            pos+=ans[i];
        }
        else if (ans[i]<0)
        {
            neg+=ans[i];
        }
        
        
    }

    if (abs(neg)>pos)
    {
        for (int i = 0; i < odd.size(); i++)
        {
            
            if (ans[odd[i]]>=0)
            {
                ans[odd[i]]++;
                pos++;
            }
            // else if (ans[i]<0)
            // {
            //     neg--;
            // }

            if (abs(neg)==pos)
            {
                break;
            }
            
        }
        
    }
    else if (abs(neg)<pos)
    {
        for (int i = 0; i < odd.size(); i++)
        {
            
            // if (ans[i]>=0)
            // {
            //     pos--;
            // }
            // else 
            if (ans[odd[i]]<0)
            {
                ans[odd[i]]--;
                neg--;
            }

            if (abs(neg)==pos)
            {
                break;
            }
            
        }
    }
    


    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endn;
    }
    
    

    return 0;
}