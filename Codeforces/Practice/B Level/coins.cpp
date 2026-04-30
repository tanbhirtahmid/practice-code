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

    // vstring s(3);
    int a=0, b=0, c=0;

    vector <vector <int>> num(3, vector <int> (2));

    num[0][1]='A';
    num[1][1]='B';
    num[2][1]='C';

    for (int i = 0; i < 3; i++)
    {
        // cin >> s[i];

        string s; cin >> s;
    
        if (s=="A>B")
        {
            num[0][0]++;
        }
        else if (s=="B<A")
        {
            num[0][0]++;
        }
        else if (s=="A>C")
        {
            num[0][0]++;
        }
        else if (s=="C<A")
        {
            num[0][0]++;
        }
        else if (s=="A<B")
        {
            num[1][0]++;
        }
        else if (s=="B>A")
        {
            num[1][0]++;
        }
        else if (s=="C<B")
        {
            num[1][0]++;
        }
        else if (s=="B>C")
        {
            num[1][0]++;
        }
        else if (s=="A<C")
        {
            num[2][0]++;
        }
        else if (s=="C>A")
        {
            num[2][0]++;
        }
        else if (s=="C>B")
        {
            num[2][0]++;
        }
        else if (s=="B<C")
        {
            num[2][0]++;
        }
        
    }

    if (num[1][0]==num[2][0] || num[2][0]==num[0][0] || num[0][0]==num[1][0])
    {
        cout << "Impossible";
        return 0;
    }
    

    sort(all(num));

    for (int i = 0; i < 3; i++)
    {
        cout << (char)num[i][1];
    }
    

    
    

    return 0;
}