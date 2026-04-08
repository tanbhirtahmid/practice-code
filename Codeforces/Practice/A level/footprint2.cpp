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


int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string str; cin >> str;
    int s, t;


    int numR = count(all(str), 'R');
    int numL = count(all(str), 'L');

    // auto it1 = find(all(s), 'R');
    // auto itL = find(all(s), 'L');

    int itR = str.find('R');
    int itL = str.find('L');

    int posL, posR;
    if (numL==0 && !(numR==0))
    {
         for (int i = 0; i < str.size(); i++)
            {
                if (str[i]=='R')
                {
                    posR=i;
                } 
            }

            s=itR+1; 
            t=posR+2;

    }
    else if (numR==0 && !(numL==0))
    {
         for (int i = 0; i < n; i++)
            {
                if (str[i]=='L')
                {
                    posL=i;
                } 
            }

            s=posL+1; 
            t=itL;

    }
    else 
    {
        s=itR+1;

        // for (int i = 0; i < str.size(); i++)
        // {
        //     if (str[i]=='L')
        //     {
        //         posL=i;
        //     } 
        // }

        t=itL;

    }
    // else if (itF<itR)
    // {
    //     s=itR+1;

    //     for (int i = 0; i < str.size(); i++)
    //     {
    //         if (str[i]=='F')
    //         {
    //             posF=i;
    //         } 
    //     }

    //     t=posF;

    // }





    cout << s << " " << t;

    return 0;

}