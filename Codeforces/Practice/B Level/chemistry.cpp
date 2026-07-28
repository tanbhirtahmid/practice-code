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

void openfile()
{
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
}

void code() {
    int n, k; 
    cin >> n >> k;
    string s;
    cin >> s;

    set <char> dis;

    for (int i = 0; i < s.size(); i++)
    {
        dis.insert(s[i]);
    }

    vint num;

    auto it = dis.begin();

    for (it = dis.begin(); it != dis.end(); it++)
    {
        num.pb(count(all(s), *(it)));
    }

    long long int odd=0, even=0, rem=n-k;

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i]%2==0)
        {
            even++;
        }
        else odd++;
    }

    if(rem%2==0)
    {
        for (int i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
    

    int i=0;
    for (it = dis.begin(); it != dis.end(); it++)
    {
        cout << *(it) << "=" << num[i] << endn;
        i++;
    }

    // cout << endn << "----" << endn;
}

int main() {
    fastIO();

    openfile();

    int t;
    cin >> t;
    while (t--) {
        code();
    }

    return 0;
}