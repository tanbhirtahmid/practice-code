#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
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
    vllint nums2;
    long long numi;
    
    for (int i = 0; i < n; i++)
    {
        stringstream ss;
        cin >> nums[i];
        ss << nums[i];
        ss >> numi;
        nums2.pb(numi);
    }
    int count =0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            if (nums[i][j]>k || nums2[i]==pow(10, 1) /* || nums2[i]==pow(10, 2) || nums2[i]==pow(10, 3) || nums2[i]==pow(10, 4) || nums2[i]==pow(10, 5) || nums2[i]==pow(10, 6) || nums2[i]==pow(10, 7) || nums2[i]==pow(10, 8) || nums2[i]==pow(10, 9) */  )
            {
                break;
            }
            else if ((j==nums[i].size()-1 && nums[i][j]<=k) || nums2[i]==pow(10, 3))
            {
                count++;
            }
 
        }
        
    }
    

    cout << count;
    // cout << nums2[1];
    return 0;

}