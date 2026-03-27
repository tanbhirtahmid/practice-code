#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, count=0, old=0;
    cin >> n;
    vector <int> akar(n);
    vector <int> order;
    for (int i = 0; i < n; i++)
    {
        cin >> akar[i];
        order.push_back(akar[i]);
    }
    sort(order.begin(),order.end());
    int x=n-1;
    int p= order[x];
    for (int i = 0; i < n; i++)
    {
        // cout << akar.size() << endl;
        if (akar[i]==p)
        {
            // if (count==0)
            // {
            //     akar.erase(akar.begin());
            // }
            // else akar.erase(akar.begin(), akar.begin() + (count-1));
            for (int j = x; j >= (x-count); j--)
            {
                cout << order[j] << " ";
            }
            x-=(count+1);
            if(x>=0) p= order[x];
            count=0;
            
        }
        else
        {
            count++;
        }
        
        cout << endl;
        
    }
    
    return 0;

}