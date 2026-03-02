#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, d; 
    cin >> n >> m >> d;

    int tower = 0;
    int count = 0;
    for (int j = 0; j < n; j++)
        {
            tower+=m;
            if (tower>d)
            {
                count++;
                tower=0;
            }
            
            
        }
        if (tower!=0)
        {
            cout << count+1;
        }
        else cout << count;
    return 0;
}
