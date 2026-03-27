    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main () {
        int x, count=0, tower=0;
        cin >> x;
        vector<vector<int>> n(x, vector<int>(3, 0));
        for (int i = 0; i < x; i++)
        {
            cin >> n[i][0] >> n[i][1] >> n[i][2];
        }

        // vector <int> ans(n);

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < n[i][0]; j++)
            {
                tower+=n[i][1];
                if (tower>n[i][2])
                {
                    count++;
                    tower=0;
                }
                
            }
            if (n[i][1]>n[i][2])
            {
                cout << 0; 
            }
            
            if (tower!=0 && count>1)
            {
                cout << count+1 << endl;
            }
            else cout << count << endl;
            count=0;
            
        }
        return 0;
        
        
        
        
    }