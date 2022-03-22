#include <bits/stdc++.h>
using namespace std;

int main(){
    int RD, DD;
    int RM, DM;
    int RY, DY;
    int fine = 0;

    cin>>RD>>RM>>RY;
    cin>>DD>>DM>>DY;

    if(RD < DD){
        fine = 0;
        cout<<fine;
    }

    else if(RD > DD){
        if(DM == RM && DY == RY ){
            fine = 15 * (RD - DD);
        }
        else if(DY == RY && DM != RM){
            fine = 500 * (RM - DM);
        }
        else if(DY != DM){
            fine = 10000;
        }
        cout<<fine;
    }

    return 0;
}