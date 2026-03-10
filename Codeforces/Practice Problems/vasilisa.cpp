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
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    
    int a, b, c, d;

    a = (r1-c2+d1)/2;
    d = (r2+c2-d2)/2;
    // a= d1-d;
    b= r1-a;
    c= c1-a;

    if ( (a==b || c==d || d==a || b==d || c==a || b==c || a<1 || b<1 || c<1 || d<1 || a>9 || b>9 || c>9 || d>9) || !(a+b==r1 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2))
    {
        cout << -1;
    }
    else
    cout << a << " " << b << '\n' << c << " " << d;


    return 0;

}