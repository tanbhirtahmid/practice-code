#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; 
    cin >> n;
 
    int result = 0;
    
    vector<vector<int>> nums(n, vector<int>(2, 0));
 
    for (int i = 0; i <  nums.size(); i++){
        for (int j = 0; j < 2; j++){
            cin >> nums[i][j];
        }
    }
 
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i][0] == nums[j][1]) result++;
            if(nums[j][0] == nums[i][1]) result++;
        }
    }
 
    cout << result;
 
    return 0;
}
