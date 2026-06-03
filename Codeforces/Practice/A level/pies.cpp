#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    vector <char> ss(n-1);
    vector <char> sc(n-1);
    int keys=0;
    for(int i=0; i < n-1; i++){
      cin >> ss[i] >> sc[i];
    }
    
    bool found=0;
    // int count=0;
    
    for(int i=0; i < n-1; i++)
    {
      for(int j=0; j < i+1; j++){
        if((sc[i]-'A'+'a')==ss[j])
        {
          ss[j]=32;
          // cout << "found" << '\n';
          // count++;
          found=1;
          break;
        }
        // else keys++;
      }
      if(!found)
      {
       keys++;
      // count=0;
      }
       found=0;
        // found = 0;
      
    }
    
    
    cout << keys;
    // for(int i; i < n-1; i++){
    //   cout << ss[i] << sc[i];
    // }
    
    return 0;
}