#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;
using vint = vector<int>;
using vllint = vector<long long int>;
using vchar = vector<char>;
using vstring = vector<string>;
#define pb push_back
#define endn '\n'
#define all(x) (x).begin(), (x).end()

void setIO() // Enables read and write to input and output file respectivly 
{  
#ifndef ONLINE_JUDGE
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/output.md", "w", stdout);
#endif
}

void unsetIO() // Disables read and write to input and output file respectivly
{
#ifndef ONLINE_JUDGE
    freopen("/dev/tty", "w", stdout); // Restores the output to the terminal
    system("diff '/home/sf/Documents/Programing/KU CSE/Input files/output.md' '/home/sf/Documents/Programing/KU CSE/Input files/expected.md'"); // A simple bash command that checks if the given output matches the expected output (diff command only works on Linux)
#endif
}

// Fast I/O setup
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void distinct(int l, int n, const int arr[])
{
    int count=n-l;
    for (int i = l-1; i < n; i++)
    {
        // count++;
        for (int j = l-1; j < n; j++)
        {
            if(arr[i]==arr[j] && j!=i )
            {
                count--;
                break;
            }
        }
    }
    cout << count << endn;
    
}

int main() {
    fastIO();
    setIO();

    int n, m; 
    cin >> n >> m;
    int a[n], l[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> l[i];
    }

    for (int i = 0; i < m; i++)
    {
        distinct(l[i], n, a);
    }

    unsetIO();

    return 0;
}