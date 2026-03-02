#include <iostream>
#include <vector>
using namespace std;

int main () {
    string words;
    int a=0;
    vector<int> alpha(26, 0);
    vector<char> bet(26, 0);

    for (int i = 0; i < 26; i++)
    {
        bet[i]+=97+i;
    }
    

    getline(cin, words);
    // cout << words[0];
    if (words.size()==2)
    {
        cout << 0;
    }
    else // starts from one and is an odd number
    {
        for (int i = 1; i < words.size(); i+=3)
        {
            for (int j = 0; j < 26; j++)
            {
                if (words[i]==bet[j])
                {
                    alpha[j]++;
                }
                
            }
            
        }

        for (int i = 0; i < 26; i++)
        {
            if (alpha[i]>0)
                {
                    a++;
                }
        }
        

        cout << a;
        
    }

    return 0;
}