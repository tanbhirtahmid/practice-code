#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()

void setIO() // Enables read and write to input and output file respectivly 
{  
#ifndef ONLINE_JUDGE
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
#endif
}

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void distinct(int l, int n, vector <int> arr, vector <bool> fr)
{
    int count=n-l+1;
    sort(arr.begin()+l-1, arr.end());
    for (int i = l-1; i < n-1; i++)
    {
        if(arr[i]==arr[i+1]) count--;
    }
    cout << count << endn;
    
}

int main() {
    fastIO();
    setIO();
    
    int n, m; 
    cin >> n >> m;
    vector <int> a(n), l(m);
    vector <bool> fr(n, 1);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // fr[i]=1;
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < m; i++)
    {
        distinct(l[i], n, a, fr);
    }

    return 0;
}