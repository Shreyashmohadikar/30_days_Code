#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string FN, emailId; 
    vector<string> v;
    string str ("@gmail.com");
    while(t--){
        cin>>FN>>emailId;
        if (emailId.find(str) != string::npos) 
        {
            v.push_back(FN);
            // cout<<FN<<endl;
        }
    }
    sort(v.begin(), v.end());
 
    for (auto x : v)
        cout << x << endl;
    

    return 0;
}