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

int main() {
    fastIO();

    int y; //Beautiful Year
    cin >> y;

    for (int i = y+1; i < 9013; i++)
    {
        int a, b, c, d, year, count=0;
        year=i;
        a= year%10;
        year/=10;
        b=year%10;
        year/=10;
        c=year%10;
        year/=10;
        d=year%10;

        if(a!=b) count++;
        if(a!=c && b!=c) count++;
        if(a!=d && b!=d && c!=d) count++;

        if (count==3)
        {
            cout << i;
            return 0;
        }
        
    }

    return 0;
}