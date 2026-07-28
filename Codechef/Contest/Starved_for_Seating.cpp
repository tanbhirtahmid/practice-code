#include <bits/stdc++.h>
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
    int n, sum;
    cin >> n >> sum;
    vint fan(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fan[i];
    }

    int match = n*(n-1)/2;

    int temp = 0;
    int j = 0;
    int k = 0, count = 0;
    for (int i = 0; i < match; i++)
    {
        j = i+1;
        while (j < n)
        {
            temp = fan[i]+fan[j];
            k = 0;
            while(k < n)
            {
                if(k!=i && k!=j) temp+=fan[k]/2;
                if(temp > sum)
                {
                    count++;
                    break;
                }
                k++;
            }
            j++;
        }
        
    }
    
    cout << count << endn;
    
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