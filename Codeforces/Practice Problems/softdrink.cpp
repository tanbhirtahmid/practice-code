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

    int toast[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> toast[i];
    }
    int ans[4];
    ans[0]= (toast[1]*toast[2])/toast[6];
    ans[1]=toast[3]*toast[4];
    ans[2]=toast[5]/toast[7];

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << ans[i] << endn;
    // }
    

    ans[3]=(min(ans[0], min(ans[1], ans[2])))/toast[0];

    cout << ans[3];


    return 0;

}