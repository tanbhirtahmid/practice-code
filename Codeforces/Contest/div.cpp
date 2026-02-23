// Failed Contest

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    string s[t];
    int count[t]={0};
    int n[t]={0};
    int result[t]={0};
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        cin >> s[i];

    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n[i]; j++)
        {
            if(s[i][j]!=s[i][j+1]){

                result[i]=n[i];

            }
            else if(s[i][j]==s[i][j+1]){

                count[i]++;
                result[i]++;

            }
        }
        
    }

    for (int i = 0; i < t; i++)
    {

        cout << result[i] << '\n';
    }
    

    

}