#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector <int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    int n, count=0; cin >> n;
    vint coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    sort(all(coins));
    int sum=0;
    for (int i = 0; i < n-1; i++)
    {
        sum+=coins[i];
    }

    if (sum<coins[n-1])
    {
        cout << 1;
    }
    else
    
    cout << (n/2)+1;

    return 0;

}