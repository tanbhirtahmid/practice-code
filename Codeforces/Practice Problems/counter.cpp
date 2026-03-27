#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vint = vector<int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define all(x) (x).begin(), (x).end()


int main() {
    long long int r, x, l; cin >> r >> l;
    // long long int mini = min(r, l);
    // while (!(r%mini==0 && l%mini==0))
    // {
    //     mini--;
    // }

    // if (mini==1)
    // {
    //     cout << -1;
    //     exit(0);
    // }

    int num1=2, num2=2;

    while (num1<10)
    {
        if (r%num1==0)
        {
            break;
        }
        num1++;
        
    }

    while (num2<10)
    {
        if (l%num2==0)
        {
            break;
        }
        num2++;
        
    }

    // cout << num1;
    

    // long long int x = r+1;
    // while (x<l)
    // {
    //     while (!(r%mini==0 && l%mini==0 && x%mini==0))
    // {
    //     mini--;
    // }
    // if (mini==1)
    // {
    //     cout << r << " " << x << " " << l;
    //     exit(0);
    // }
    // else x++;
    // }
    if(r-l==1 || r-l==-1 || r-l==0) cout << -1;
    // else cout << r << " " << r+1 << " " << r+2;
    else if ((r%2==0 && l%2==0) || (r%3==0 && l%3==0) || (r%4==0 && l%4==0) || (r%5==0 && l%5==0) || (r%6==0 && l%6==0) || (r%7==0 && l%7==0) || (r%8==0 && l%8==0) || (r%9==0 && l%9==0))
    {
        cout << r << " " << r+1 << " " << l;
    }
    else if (r%num1==0)
    {
        while (l%num1!=0)
        {
         x=--l;
        }

        cout << r << " " << r+1 << " " << x;
        
    }
    else if (l%num2==0)
        {
            while (r%num2!=0)
        {
         x=++r;
        }

        cout << x << " " << l-1 << " " << l;
        }
    
    else cout << -1;
    

    return 0;

}