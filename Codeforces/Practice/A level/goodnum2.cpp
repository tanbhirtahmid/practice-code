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
    int n;
    char k;
    cin >> n >> k;
    vstring nums(n);
    vint digits(k+1-'0');
    

    // input goes here

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int count1 =0, count2=0;

    // main stuff is done here

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            if (nums[i][j]<=k)
            {
                digits[nums[i][j]-'0']++; // when match.. increase digits
            }
            
        }

        for (int j = 0; j <= k-'0'; j++)
        {
            if (digits[j]>0)
            {
                count1++; // count how many digits were there / Digit counter
            }
            
        }
        if (count1==k+1-'0')
        {
            count2++;   // count if all digits from zero to k are present / good num counter
        }
        fill(all(digits), 0);
        count1=0; // reset digit counter
    }

    
    cout << count2;     // the final output

    
    return 0;

}