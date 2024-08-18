#include <iostream>
#include <cmath>
using namespace std;

bool flag(int n) {
    if (n <= 1) return false; // fix to handle n <= 1
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if(n%2==0 && n>2) cout<<"yes";
    else{
        if (flag(n) && flag(n-2)) {
        cout << "true";
    } else {
        cout << "false";
    }
    }
}
