#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int ii = 0;
    double dd = 0.0;
    string ss;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>ii;
    cin>>dd;
    
    getline(cin,ss);
    
    // Print the sum of both integer variables on a new line.
    cout<<i+ii<<endl;
    // Print the sum of the double variables on a new line.
    cout<<d+dd<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<ss;

    return 0;
}