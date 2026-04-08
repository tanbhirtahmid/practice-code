#include <iostream>
  #include <vector>
  #include <algorithm>
  #include <cmath>
  using namespace std;

  using vint = vector<int>;
  using vllint = vector<long long int>;
  using vchar = vector<char>;
  using vstring = vector<string>;

  #define endn '\n'
  #define pb push_back
  #define all(x) (x).begin(), (x).end()

  void code() {
    int sum=0;
    vint a(7);
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }
    sort(all(a));
    for (int i = 0; i < 7; i++)
    {
        if (i<6)
        {
            sum-=a[i];
        }
        else sum+=a[i];
    }

    cout << sum << endn;
    



  }

  int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t; 
      cin >> t;
      while (t--) {
          code();
      }
      
      return 0;
  }