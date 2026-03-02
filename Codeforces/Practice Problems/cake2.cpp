// #include <iostream>
// using namespace std;

// int main () {
//     int n, t, k, d, time2=0, x, y, time1;
//     cin >> n >> t >> k >> d;
//     time1=(t/k)*n;
//      y=n;

//     while (y>k)
//     {


//         time2++;
//         if(time2==d) x=time2;
//         if(time2%t==0)
//         {
//                 y-=k;
//         }
        
//     }
    
    
//         if (x==d && time1<=time2)
//         {
//             cout << "YES";
            
//         }
//         else if (y<=k)
//         {
//             cout << "NO";
            
//         }

//    return 0;

//    //  cout << " " << time1 << " " << time2;

// }

#include <iostream>
using namespace std;

int main(){
    long int n, t, k, d;
 cin >> n >> t >> k >> d;

 long int time = ((n+k-1)/k)*t;
 long int new_time = t + d;

 if(new_time >= time) cout << "NO";
 else cout << "YES";

 return 0;
}

