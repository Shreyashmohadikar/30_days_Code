#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    try{
        int final = stoi(S);
        cout<<final;
    }
    catch(...)
    {
        cout<<"Bad String";
    }

    return 0;
}