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
    vint x(4), y(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i] >>
         y[i];
    }
    float hand;
    vector <float> ans;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hand=sqrt(pow(x[i]-x[j], 2)+pow(y[i]-y[j], 2));
            ans.pb(hand);
        }
        
    }
    ans.erase(remove(all(ans), 0), ans.end());
    long long int mini = *min_element(all(ans));

    cout << mini*mini << endn;
    
    
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