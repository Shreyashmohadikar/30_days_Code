#include <bits/stdc++.h>
using namespace std;

void meal(double meal_cost, int tip_percent, int tax_percent){
    double tip_cost;
    double tax_cost; 
    int total_cost;
    tip_cost = (tip_percent * meal_cost) / 100;
    tax_cost = (tax_percent * meal_cost) / 100;
    total_cost = (int)round(meal_cost + tax_cost + tip_cost) ;
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