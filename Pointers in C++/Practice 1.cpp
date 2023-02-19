#include<iostream>
using namespace std;
int main() {
	int a=14;
	int*b=&a;
	cout<<"the address of a is"<<&a<<endl;
	cout<<"the address of a is "<<b<<endl;
	cout<<"the value of at address b is"<<*b<<endl;
	
	//cout<<b<<endl;
	return 0;
	
}
