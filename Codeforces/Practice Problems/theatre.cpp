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
    long long int n, m, a; cin >> n >> m >> a;
    long long int b, c;
    b=n/a; c=m/a;
    if (n%a!=0)
    {
        b++;
    }
    if (m%a!=0)
    {
        c++;
    }

    cout << b*c;
    
    

    return 0;

}