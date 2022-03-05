#include <bits/stdc++.h>
using namespace std;

void factorial(int n){
    int fact=1;
    for (int i=n; i>0; i--){
        fact*=i;
    }
    cout<<fact;
}

int main()
{
    int num;
    cin>>num;
    factorial(num);
    return 0;
}