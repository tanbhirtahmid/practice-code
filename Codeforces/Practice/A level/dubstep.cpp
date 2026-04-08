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
    string dub;
    int count=0; 
    cin >> dub;
    // dub.erase(remove(dub.begin(), dub.end(), "WUB"), dub.end());
    for (int i = 0; i < dub.size(); i++)
    {
        
        if (dub[i]=='W' && dub[i+1]=='U'&& dub[i+2]=='B')
        {   
            i+=2;
            count++;
        }
        else
        {
            cout << dub[i];
            count=0;
        }
        if (i!=2 && count==1)
        {
            cout << " ";
            
            
        }
        
        
    }
    
    // cout << dub;

    return 0;

}