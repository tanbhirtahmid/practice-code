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
    int x;
    cin >> x;
    if (x==67)
    {
        cout << x<< endn;
    }
    else
    cout << x+1 << endn;

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