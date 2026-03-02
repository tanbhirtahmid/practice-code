#include <iostream>
#include <vector>
using namespace std;


int main () {
    string a, b;
    cin >> a >> b;
    if(a==b) {cout << -1; exit(0);}
    int count=0;
    int p = max(a.size(), b.size());
    cout << p;

}