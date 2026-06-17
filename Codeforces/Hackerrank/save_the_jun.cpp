#include <bits/stdc++.h>
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

    int n;
    cin >> n;

    vector <int> bin(n, 0);

    for (int i = 0; i < n; i++)
    {
        cout << bin[i];
    }
    
    cout << endn;
    
    for (int i = 0; i < pow(2, n)-1; i++)
    { 
        int j = n-1;
        while (j!=-1)
        {
            if(bin[j] < 1)
            {
                bin[j]++;
                break;
            }
            else
            {
                bin[j] = 0;
                j--;
            }

        }

        for (int i = 0; i < n; i++)
        {
            cout << bin[i];
        }
        
        cout << endn;
            
        
    }
    

    return 0;
}