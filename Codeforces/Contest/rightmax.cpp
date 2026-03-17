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

void code() {
    int n; cin >> n;
    vint arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i=0;
    int maxi1=-1;
    while (arr.size()!=0)
    {
        int maxi = *max_element(all(arr));
        if (count(all(arr), maxi)>1)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i]==maxi)
                {
                    maxi1=max(maxi1, i);
                }
                
            }
            arr.erase(arr.begin() + maxi1, arr.end());
        }
        else {
            auto it = find(arr.begin(), arr.end(), maxi);
        int pos = distance(arr.begin(), it);;
        arr.erase(arr.begin() + pos, arr.end());
        }
        i++;
    }

    cout << i++ << endn;
    
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        code();
    }
    
    return 0;
}