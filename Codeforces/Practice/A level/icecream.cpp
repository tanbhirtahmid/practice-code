#include <iostream>
#include <vector>
using namespace std;

int main () {
    long long int n, x, total, dep=0;
    cin >> n >> x;
    vector<char> op(n);
    vector<int> pack(n);
    for (int i = 0; i < n; i++)
    {
        cin >> op[i] >> pack[i];
    }

    total=x;

    for (int i = 0; i < n; i++)
    {
        if (op[i]=='+')
        {
          total+=pack[i];
        }
        else if (op[i]=='-')
        {
            if (total>=pack[i])
            {
                total-=pack[i];
            }
            else dep++;
            
        }
        
        
        
    }
    
    cout << total << " " << dep;
    return 0;
     
}