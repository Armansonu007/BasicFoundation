#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    //i have given n number and i have to calcuate the sum of first n natural number 
    //simple use formula 
    // cout<<n*(n+1)/2;
    //well this was formula ways 
    //we can also iterate to get the result 
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}    
    