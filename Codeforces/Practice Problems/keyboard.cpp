#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    char a; cin >> a;
    string n; cin >> n;
    string alpha="qwertyuiop[asdfghjkl;zxcvbnm,./";
    // cout << alpha << endl;
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < alpha.size(); j++)
        {
            if (n[i]==alpha[j])
            {
                if (a=='R')
                {
                    cout << alpha[j-1];
                    break;
                }
                if (a=='L')
                {
                    cout << alpha[j+1];
                    break;
                }
                
            }
            
        }
        
    }
    

    return 0;

}