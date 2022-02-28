#include <bits/stdc++.h>
using namespace std;

void multiply(int x){
    for(int i=1 ; i<=10 ; i++){
        cout<<x<<"x"<<i<<"="<<x*i<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    multiply(num);
    return 0;
}