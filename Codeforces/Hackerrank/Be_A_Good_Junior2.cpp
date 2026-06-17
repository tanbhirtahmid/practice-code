#include <bits/stdc++.h>
using namespace std;

using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;

#define endn '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

long long int perm(int num)
{
    long long int temp=1;
    
    for (int i = 1; i <= num ; i++)
    {
        temp *= i;
    }

    return temp;
    
}

int code() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << s << "^" << n << "  =";

    if(n==0)
    {
        cout << "  (1)" << endn;
        return 0;
    }


    int count = n;

    for (int i = 0; i < count+1; i++)
    {
        bool check = i > 0 && i < count;
        cout << "  (";

        if(check) cout << (perm(count)/(perm(i)*perm(count-i))) % 1009;

        if(check) cout << " * ";

        if(n!=0) cout << s[1];
        if(n>1) cout << "^" << n;

        if(check) cout << " * ";

        if(i!=0) cout << s[3];
        if(i>1) cout << "^" << i;

        cout << ")  ";

        if(i < count)
        {
            if(i % 2==0 && s[2]=='-') cout << "-";
            else cout << "+";
        }

        n--;
    }
    
    cout << endn;

    return 0;
}

int main() {
    fastIO();

    int t;
    cin >> t;
    while (t--) {
        code();
    }

    return 0;
}