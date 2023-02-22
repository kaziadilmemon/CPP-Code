#include<iostream>
#include<math.h>
using namespace std ;
bool prime(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			//return false;
		}
		
	}
	return true;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(prime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
