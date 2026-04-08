#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, b, d, net=0, result=0;
    cin >> n;
    cin >> b;
    cin >> d;
    vector<int> ornage(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ornage[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (ornage[i]<=b)
        {
            net+=ornage[i];
            if (net>d)
            {
                result++;
                net =0;
            }
            
        }
        
    }

    cout << result;

    return 0;
    
    
}