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

    // int k, l, m, n, d;

    int d;
    vint hit(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> hit[i];
    }
    
    // cin >> k >> l >> m >> n >> d;

    cin >> d;
    int sum =0;
    // int total == 4;
    
    // int maxi = *max_element(all(hit));
    // while (maxi <= d)
    // {
    //     sum+=hit.size();
    //     d-=maxi;

    //     if (maxi > d)
    //     {
    //         // total--;

    //         hit.erase(remove(all(hit), maxi), hit.end());

    //         int maxi = *max_element(all(hit));

    //     }
        
    // }

    for (int i = 1; i <= d; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i%hit[j]==0)
            {
                sum++;
                break;
            }
            
        }
        
    }
    


    cout << sum;
    
    

    return 0;
}