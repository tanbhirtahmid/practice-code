#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    string person;
    cin >> person;
    int n=person.size();
    int count=0;
    sort(person.begin(), person.end());
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (person[i]!=person[j])
    //         {
    //             count++;
    //         }
            
    //     }
        
    // }

    for (int i = 0; i < n; i++)
        {
            if (person[i]!=person[i+1])
            {
                count++;
            }
            
        }

    // int x=count/(n-1);

    if(count%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
    
    
}