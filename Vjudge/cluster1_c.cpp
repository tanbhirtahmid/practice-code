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

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int bin_search(long long int find,const long long int arr[], int left, int right, int k,bool * b)
{
    int mid= (left + right)/2;
    if (left>right)
    {
        return 0;
    }
    if ((find-k)<=arr[mid] && arr[mid]<=(find+k) && b)
    {
        *b=0;
        return 1;
    }
    else if (arr[mid]>(find+k))
    {
        return bin_search(find, arr, mid+1, right, k, b);
    }
    else if (arr[mid]<(find-k))
    {
        return bin_search(find, arr, 0, mid-1, k, b);
    }
    
    return 0;
    
}

int main() {
    fastIO();

    int n, m;
    long long int k;

    cin >> n >> m >> k;

    long long int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    bool x[m]={1};

    long long int count=0;

    for (int i = 0; i < n; i++)
    {
        count+=bin_search(a[i], b, 0, m-1, k, &x[i]);
    }
    
    cout << count;
    
    

    return 0;
}