#include <bits/stdc++.h>
using namespace std;

int main() {
	//calcuate the total shipping cost 
	double b_m=5;
	double cost_kg=2.0;
	double cost_km=0.5/10;
	
	double weight, dist;
	cin>>weight>>dist;
	//add this line 
    //to get the only two precsion values
    cout<<fixed<<setprecision(2);
	//toatla answer 
	//base + cost_kg * weight + cost_km* dist
	cout<<b_m+ cost_kg* weight + cost_km* dist;
	
	      
}