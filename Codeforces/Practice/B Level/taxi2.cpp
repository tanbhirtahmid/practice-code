#include <bits/stdc++.h>
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

    int n;
    cin >> n;
    vint s(n);

    int one=0, two=0, three=0, car=0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i]==1)
        {
            one++;
        }
        else if (s[i]==2)
        {
            two++;
        }
        else if (s[i]==3)
        {
            three++;
        }
        else if (s[i]==4)
        {
            car++; // dealing with 4
        }
    }

    // dealing 3+1
    int min13=min(one, three);
    car+=min13;
    one = one - min13;
    three = three - min13;


    // dealing 2+2
    car+=two/2;
    two = two - 2*(two/2);


    // dealing 2+1+1
    int min12=min(one/2, two);
    car+=min12;
    one = one - 2*min12;
    two = two - min12;


    // dealing 1+1+1+1
    car+=one/4;
    one = one - 4*(one/4);


    // dealing 1+1+1
    car+=one/3;
    one = one - 3*(one/3); 

    
    // dealing 1+1
    car+=one/2;
    one = one - 2*(one/2);


    // dealing with 2+1
    if (one==1 && two==1)
    {
        car++;
        one--;
        two--;
    }
    

    car = car + one + two + three;
    

    cout << car << endn;

    return 0;
}