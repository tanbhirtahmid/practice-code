#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using vint = vector<int>;
using vllint = vector< long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, s; cin >> n >> s;
    vllint nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(all(nums));

    long long int mid=(n/2);
    long long int count=0;
/*     while (nums[mid]!=s)
    {
        if (nums[mid]>s)
        {
           count+=nums[mid]-s;
           nums[mid]=s;
           sort(all(nums));
        }
        else if (nums[mid]<s)
        {
            count+=s-nums[mid];
            nums[mid]=s;
             sort(all(nums));
            
        }
        
    } */

/*         for (int i = mid; i < nums.size(); i++)
    {
        if (nums[i]>s)
        {
            count+=nums[mid+i]-s;
            // nums[i]=s;
        }
        else if (nums[i]<s)
        {
            count+=s-nums[mid];
            // nums[i]=s;
        }
 
    }
     */

    if (nums[mid]>s)
        {
            // count+=nums[mid]-s;
            for (int i = mid; i >= 0; i--) if (nums[i]>s) count+=nums[i]-s;
            // nums[i]=s;
        }

    if (nums[mid]<s)
        {
            // count+=s-nums[mid];
            for (int i = mid; i < nums.size(); i++) if (nums[i]<s) count+=s-nums[i];
            // nums[i]=s;
        }


    cout << count;
    // cout << endn << nums[mid];
    
    

    return 0;

}