#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    int n, top; cin >> n >> top;
    vector <vector<int>> nums(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        nums[i].pb(x);
        nums[i].pb(y);
    }
    if(top==6 || top == 1)
    {
    for (int i = 0; i < n; i++)
    {
        if (!((nums[i][0] == 3 && nums[i][1] == 2) || (nums[i][0] == 2 && nums[i][1] == 3) || (nums[i][0] == 4 && nums[i][1] == 5) || (nums[i][0] == 5 && nums[i][1] == 4) || (nums[i][0] == 3 && nums[i][1] == 5) || (nums[i][0] == 5 && nums[i][1] == 3) || (nums[i][0] == 2 && nums[i][1] == 4) || (nums[i][0] == 4 && nums[i][1] == 2)))
        {
            cout << "NO";
            exit(0);
        }
        
    }
    }
    else if(top==3 || top == 4)
    {
    for (int i = 0; i < n; i++)
    {
        if (!((nums[i][0] == 6 && nums[i][1] == 2) || (nums[i][0] == 2 && nums[i][1] == 6) || (nums[i][0] == 5 && nums[i][1] == 1) || (nums[i][0] == 1 && nums[i][1] == 5) || (nums[i][0] == 6 && nums[i][1] == 5) || (nums[i][0] == 5 && nums[i][1] == 6) || (nums[i][0] == 2 && nums[i][1] == 1) || (nums[i][0] == 1 && nums[i][1] == 2)))
        {
            cout << "NO";
            exit(0);
        }
        
    }
    }
    else if(top==2 || top == 5)
    {
    for (int i = 0; i < n; i++)
    {
        if (!((nums[i][0] == 6 && nums[i][1] == 4) || (nums[i][0] == 4 && nums[i][1] == 6) || (nums[i][0] == 4 && nums[i][1] == 1) || (nums[i][0] == 1 && nums[i][1] == 4) || (nums[i][0] == 6 && nums[i][1] == 3) || (nums[i][0] == 3 && nums[i][1] == 6) || (nums[i][0] == 3 && nums[i][1] == 1) || (nums[i][0] == 1 && nums[i][1] == 3)))
        {
            cout << "NO";
            exit(0);
        }
        
    }
    }

    cout << "YES";
    

    return 0;

}