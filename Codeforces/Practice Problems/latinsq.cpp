#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;

#define endn '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

void code() {
    vstring sq(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> sq[i];
    }
    int col, row;
    for (int i = 0; i < 3; i++)
    {
        row=i;
        // col = find(all(sq[i]), '?') - sq[i].begin();
        if (count(all(sq[i]), '?'))
        {
            break;
        }
        
    }

    if (count(all(sq[row]), 'A') && count(all(sq[row]), 'B'))
    {
        cout << 'C' << endn;
    }
    else if (count(all(sq[row]), 'C') && count(all(sq[row]), 'B'))
    {
        cout << 'A' << endn;
    }
    else if (count(all(sq[row]), 'C') && count(all(sq[row]), 'A'))
    {
        cout << 'B' << endn;
    }
    
    
    // cout << pos << endn;
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        code();
    }
    
    return 0;
}