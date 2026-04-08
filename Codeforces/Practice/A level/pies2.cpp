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

int main()
{
    int n; cin >> n;
    vector <char> ss(n-1);
    vector <char> sc(n-1);
    vector <int> count(26, 0);
    int keys=0;
    for(int i=0; i < n-1; i++){
      cin >> ss[i] >> sc[i];
      ss[i]=ss[i]-'a'+'A';
    }
    
    // bool found=0;
    // int count=0;
    
    for(int i=0; i < n-1; i++)
    {

        if (count[sc[i]-'A']>0)
        {
            count[sc[i]-'A']--;
            count[ss[i]-'A']++;
        }
        else if(!(sc[i]==ss[i]))
        {
            keys++;
            count[ss[i]-'A']++;
        }

    }
    
    
    cout << keys;
    // for(int i; i < n-1; i++){
    //   cout << ss[i] << sc[i];
    // }

    return 0;
}