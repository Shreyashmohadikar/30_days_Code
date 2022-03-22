// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int RD, DD;
//     int RM, DM;
//     int RY, DY;
//     int fine = 0;

//     cin>>RD>>RM>>RY;
//     cin>>DD>>DM>>DY;

//     if(RY < DY){
//         fine = 0;
//         cout<<fine;
//     }

//     else if(RD > DD){
//         if(DM == RM && DY == RY ){
//             fine = 15 * abs(RD - DD);
//         }
//         else if(DY == RY && DM != RM){
//             fine = 500 * abs(RM - DM);
//         }
//         else if((RY - DY) > 0){
//             fine = 10000;
//         }
//         cout<<fine;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int RD, DD;
    int RM, DM;
    int RY, DY;
    int fine = 0;

    cin>>RD>>RM>>RY;
    cin>>DD>>DM>>DY;

    if(RY < DY && DY <= RY){
        fine = 0;
        cout<<fine;
    }
    else if(RD > DD && DM == RM && DY == RY ){
        fine = 15 * abs(RD - DD);
    }
    else if(RD > DD && DY == RY && DM != RM){
        fine = 500 * abs(RM - DM);
    }
    else if((RY - DY) > 0){
        fine = 10000;
    }
    cout<<fine;

    return 0;
}