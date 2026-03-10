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
    long int n, k; cin >> n >> k;
    vector <vector < long long int >> nums(n, vector<long long int>(2));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> nums[i][j];
        }
        
    }

    int count=0;

    for (int i = 0; i < n; i++)
    {

            if ((nums[i][0]-1)%k==0)
            {
                count++;
            }
            if ((nums[i][1]+1)%k==0)
            {
                count++;
            }

        
    }

    cout << count;
    
    

    return 0;

}