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

int binarySearchIndex(const vstring & vec, const string & target) {
    int low = 0;
    int high = vec.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        
        if (vec[mid] == target) {
            return mid; 
        } else if (vec[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    
    return -1; 
}

int main() {
    fastIO();

    int n;
    cin >> n;
    vector <string> name(n);

    set <string> s;

    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
        s.insert(name[i]);
    }

    vstring s1(s.begin(), s.end());

    vint count(name.size(), -1);
    vint count1(s.size(), -1);

    for (int j = 0; j < n; j++)
    {
        int i = binarySearchIndex(s1, name[j]);
        if (i!=-1)
        {
            count1[i]++;
            count[j] = count1[i];
        }
        
    }


    for (int i = 0; i < n; i++)
    {
        if(count[i]>0)
        {
            cout << name[i] << count[i];
        }
        else cout << "OK";

        cout << endn;
    }
    
    
    
    

    return 0;
}