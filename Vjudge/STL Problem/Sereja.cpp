#include <bits/stdc++.h>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int check(int * arr, int * i, int  * j)
{
    int num;
    if(arr[*i]>arr[*j])
    {
        num = arr[*i];
        *i = *i + 1;
        return num;
    }
    else
    {
        num = arr[*j];
        *j = *j - 1;
        return num;
    }
}

int main() {
    fastIO();

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = n-1, sum1=0, sum2=0;
    bool sr=1;

    while (i<=j)
    {
        if(sr)
        {
            sum1+=check(arr, &i, &j);
            sr = 0;
        }
        else
        {
            sum2+=check(arr, &i, &j);
            sr = 1;
        }
    }
    

    cout << sum1 << " " << sum2;
    

    return 0;
}