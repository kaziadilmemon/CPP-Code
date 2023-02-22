#include<iostream>
using namespace std;
int evodd(int n){
	
	if(n%2==0){
		cout<<"even"<<endl;
		}
		else cout<<"odd"<<endl;
	return n;
	}

int main(){
	int n;
	cout<<" enter the number"<<endl;
	cin>>n;
	evodd(n);
	return 0;
	
}
