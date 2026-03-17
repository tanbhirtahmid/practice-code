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

    long int n, s; cin >> n >> s;
    vllint nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(all(nums));

    long int mid=(n/2);
    long int count=0;
    if (nums[mid]>s)
    {
        while (mid!=s)
        {
            count++; mid--;
        }
        
    }
    else if (nums[mid]<s)
    {
        while (mid!=s)
        {
            count++; mid++;
        }
        
    }

    cout << count;
    
    

    return 0;

}