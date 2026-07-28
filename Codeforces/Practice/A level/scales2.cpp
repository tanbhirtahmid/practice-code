#include <iostream>
#include <string>

using namespace std;

int main() {
    string scale, extra;
    cin >> scale >> extra;

    size_t pipe = scale.find('|');
    string L = scale.substr(0, pipe);
    string R = scale.substr(pipe + 1);

    for (char c : extra) {
        if (L.size() <= R.size()) L += c;
        else R += c;
    }

    if (L.size() == R.size()) {
        cout << L << "|" << R << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}