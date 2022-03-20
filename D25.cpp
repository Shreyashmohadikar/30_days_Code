#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int sqr;
    if(n == 1){
        return false;
    }
    else if(n == 2){
        return true;
    }
    sqr = sqrt(n);
    for(int i=2; i<=sqr; i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        bool result = checkPrime(num);

        if(result){
            cout<<"Prime"<<endl;
            }
        else{
            cout<<"Not prime"<<endl;
        }
    }

    return 0;
}
