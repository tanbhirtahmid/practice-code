#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;

#define endn '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code() {
    long long int n;
    cin >> n;
    long long int count=0, i=0;
    bool ran = 0;
    for (i = 0; n!=1 ; i++)
    {
        if (n%6==0)
        {
            n/=6;
            count=0;
        }
        else
        {
            n*=2;
            count++;
        } 

        if (count>2)
        {
            cout << -1 << endn;
            ran = 1;
            break;
        }
        
        
    }
    
    if(!ran) cout << i << endn;
}

int main() {
    fastIO();

    int t;
    cin >> t;
    while (t--) {
        code();
    }

    return 0;
}