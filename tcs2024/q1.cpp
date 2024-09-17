//tcs nqt 2024 questions
//1st question is based on the simple logic of unitary method
#include<bits/stdc++.h>
using namespace std;
int main(){
    //gievn data
    float baseMoney=5;
    float cost_per_km=0.5/10;
    float cost_per_kg=2;
    //
    //we have to take two inputs
    float wt, dt;
    cin>>wt>>dt;
    float res=baseMoney+wt*cost_per_kg+dt*cost_per_km;
    cout<<fixed<<setprecision(2)<<res;;
    
} 