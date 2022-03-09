#include <bits/stdc++.h>
using namespace std;

class Person{

};

class Student : public Person{
    private:
        vector<int> testscores;
    public:
    //constructor
    Student(string firstname, string lastname
    int idNumber, vector<int> scores){
        
        
    }

    char calculate(){
        int total = 0;
        for (int i=0; i<this->testscores.size; i++){
            total += this->testscores[i];
        }
        int average_marks = (total/this->testscores.size());

        // cout<<"Grade:"<<average_marks;
    }
};

int main(){
    int num;
    cin>>num;
    int arr[num];
    int sum=0;
    for (int i=0; i<num; i++){
        cin>>arr[i];
    }
    calculate(arr[num]);


    return 0;
}