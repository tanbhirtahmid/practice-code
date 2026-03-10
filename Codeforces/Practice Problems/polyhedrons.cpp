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
    int n; cin >> n;
    vstring poly(n);
    for (int i = 0; i < n; i++)
    {
        cin >> poly[i];
    }
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (poly[i]=="Tetrahedron")
        {
            sum+=4;
        }
        else if (poly[i]=="Cube")
        {
            sum+=6;
        }
        else if (poly[i]=="Octahedron")
        {
            sum+=8;
        }
        else if (poly[i]=="Dodecahedron")
        {
            sum+=12;
        }
        else if (poly[i]=="Icosahedron")
        {
            sum+=20;
        }
    }

    cout << sum;
    

    return 0;

}