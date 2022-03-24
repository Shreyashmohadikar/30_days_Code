#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, max = 0;
    int t, tmp = 0;
    vector<int> v;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            v.push_back(i+1);
        }
        for(int j = 0; j < v.size(); j++){
            for(int k = j + 1; k < v.size(); k++ ){
                tmp = v[j] & v[k];
                if(tmp<k){
                    max = (tmp > max ? tmp : max);
                }
            }
        }
        cout<<max<<endl;
    }

    return 0;
}