#include <iostream>
#include <cmath>
using namespace std;
bool func(int n){
    if(n>0) return true;
     return false;
}
int main() {
    int n;
    cin >> n;
    //check if it positive or negative 
    if(func(n)) cout<<"positive";
    else cout<<"negative";
}