#include <bits/stdc++.h>
using namespace std;

void meal(double meal_cost, int tip_percent, int tax_percent){
    int tip_cost;
    int tax_cost; 
    int total_cost;
    tip_cost = (tip_percent / 100) * meal_cost;
    tax_cost = (tax_percent / 100) * meal_cost;
    total_cost = meal_cost + tax_cost + tip_cost ;
    cout<< total_cost; 
}

int main()
{
    int y,z;
    double x;
    cin>>x>>y>>z;
    meal(x,y,z);
    return 0;
}