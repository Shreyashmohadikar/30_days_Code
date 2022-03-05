#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count=0;
    int max=0;

    while(num>0){
        if(num % 2 == 1){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 0;
        }
        num/=2;
    }
    cout<<max;
    return 0;
}