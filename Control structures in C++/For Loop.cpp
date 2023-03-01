#include<iostream>
using namespace std;
int main(){
	int a,b;
	for(a=1;a<=10;a++){
		cout<<a;
		for(b=2;b<=2;b++){
			if(a<=9){
				cout<<"+";
			}
			else if(a=10){
				cout<<"=";
			}
		}
	}
	cout<<"55";
	return 0;
}



