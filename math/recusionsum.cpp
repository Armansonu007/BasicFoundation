#include <iostream>
#include <cmath>
using namespace std;
//this is basic learing that we can implement the recusion also here

void func(int n, int &sum){
    if(n<0) {
      
        return;
    }
    //i can do the logic 
    sum+=n;
    func(n-1, sum);
}
int main() {
    int n;
    cin >> n;
    //can this question be solved by the simple basic understanding of recursion
    //i can also do this in other way that is passing by the reference
    int sum=0;
    func(n, sum);
    cout<<sum;
}    
    