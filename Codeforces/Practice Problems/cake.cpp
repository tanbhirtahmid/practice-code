#include <iostream>
using namespace std;

int main () {
    int n, t, k, d, time2=0;
    cin >> n;
    cin >> t;
    cin >> k;
    cin >> d;
    float time1=((float)t/k)*n;
    int i=0;    
    // while (i<=n)
    // {
    //     time2++;
    //     if (time2%d==0)
    //     {
    //         break;
    //     }
    //     else if (time2%t==0)
    //     {
    //         i+=k;
    //     }
    // }

    while (i<=n)
    {
        time2++;
        if (time2==d)
        {
            
            break;
        }
        else if (time2%t==0)
        {
            i+=k;
        }
        
        
    }
    
    int t1=0;

    while (i<n)
    {
        
        
        if (t1%t==0 && t1!=0)
        {
            i+=k;
        }
        if (time2%t==0)
        {
            i+=k;
        }
        if (i==n)
        {
            break;
        }
        
        time2++;
        t1++;
        
        
    }
    
    
    if (time2>=time1)
    {
        cout << "NO";
    }
    else
    cout << "YES";

    cout << " " << time1 << " " << time2;
    
}