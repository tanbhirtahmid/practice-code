#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    int b;
    cin >> b;

    vector<vector<int> > kill(b, vector<int>(2, 0));

    for(int i=0; i<b; i++){
        for(int j=0; j<2; j++) cin >> kill[i][j];
    }

    for(int i=0; i<b; i++){
        int p = arr[kill[i][0] - 1];
        int r = p - kill[i][1];
        int l = kill[i][1] - 1;

        if(kill[i][0] - 2 < 0) {
            arr[kill[i][0]] += r;
            arr[kill[i][0] - 1] = 0;
        } else if(kill[i][0] >= (n)) {
            arr[kill[i][0] - 2] += l;
            arr[kill[i][0] - 1] = 0;
        } else{
            arr[kill[i][0]] += r;
            arr[kill[i][0] - 2] += l;
            arr[kill[i][0] - 1] = 0;
        }
    }

    for(int i=0; i<n; i++) cout << arr[i] << endl;
    return 0;
}

   