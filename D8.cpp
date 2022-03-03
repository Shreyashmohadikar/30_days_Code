#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, number;
    cin>>n;
    string name, name_input;
    map<string,int> employees;
    for(int i=0; i<n; i++){
        cin>>name;
        cin>>number;
        cin.ignore();
        employees[name] = number;
    }
    while(getline(cin,name_input)){
        if(employees.find(name_input) !=employees.end()){
            cout<<name_input<<"="<<employees[name]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}