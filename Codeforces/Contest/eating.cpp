#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int test, inp;
    cin >> test;
    vector <int> player(test);
    vector <vector<int>> dish(test);

    for (int i = 0; i < test; i++)
    {
        cin >> player[i];
        for (int j = 0; j < player[i]; j++)
        {
            cin >> inp;
            dish[i].push_back(inp);
        }
        
    }

    int count=0;

for (int j = 0; j < test; j++)
{
    int p=*max_element(dish[j].begin(), dish[j].end());
        for (int i = 0; i < dish[j].size(); i++)
    {
       if (p==dish[j][i])
       {
        count++;
       }
       
        // if (count)
        // {
        //     /* code */
        // }
        
        
    }
    cout << count << endl;
    count=0;
}

return 0;

    
    
}