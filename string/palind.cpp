#include <iostream>
#include<string>
using namespace std;
bool func(string s){
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
	
	string s;
	cin>>s;
	if(func(s)) cout<<"yes";
	else cout<<"no";
	
}