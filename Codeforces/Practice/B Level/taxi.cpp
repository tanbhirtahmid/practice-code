#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()
 
// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
int main() {
    fastIO();
 
    int n, car=0;
    cin >> n;
    vint group(n);
 
    int one=0, two=0, three=0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> group[i];
 
        if (group[i]==1)
        {
            one++;
        }
        else if (group[i]==2)
        {
            two++;
        }
        else if (group[i]==3)
        {
            three++;
        }
        else if (group[i]==4)
        {
            car++;
        }
        
    }
 
    
    if (one>0)
    {
        if (three!=0)
        {
            if (three<one)
            {
                car+=three;
                one = one-three;
                three=0;
                
            }
            else if(one<=three)
            {
                car+=one;
                three=three-one;
                one=0;
            } 
        }
        
    }
    
    car+= two/2;
    two = two - 2*(two/2);
    
    if (two!=0 && (one/2)!=0)
    {
        if ((one/2)>two)
        {
            car+=two;
            one= one - two*2;
            two=0;
        }
        else if((one/2)<=two)
        {
            car+=one/2;
            two=two - one/2;
            one=0;
        } 
    }
    
    
    car+= one/4;
    one = one -4*(one/4);

    if (two==1 && one==1)
    {
        car++;
        two--;
        one--;
    }
    
    if(one<4 && one>1)
    {
        car++;
        one=0;
    }
    car=car+one+two+three;
    
    cout << car << endn;
    
 
    return 0;
}