#include <iostream>
using namespace std;

int main() {
   int v,w;
   cin>>v;
   cin>>w;
   //i have to also write the constainsts condition that is need to be checked
   if((w<2) || (w%2!=0) || (v>=w)){
       cout<<"INVALID INPUT";
       return;
   }
   cout<<"TW="<<(4*v-w)/2<<" "<<"FW="<<(w-2*v)/2;
	
}
