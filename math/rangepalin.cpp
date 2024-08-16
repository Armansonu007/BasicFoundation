#include <iostream>
using namespace std;
bool pr(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
	//now next question is that i have given the range of  a and b 
	//question has asked about the numbers of prime in between them 
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
	    if(pr(i)){
	        cout<<i<<" ";
	    }
	}
	return 0;
}