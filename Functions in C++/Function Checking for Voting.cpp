#include<iostream>
using namespace std;
int voting(int age){
	if(age>=18){
		cout<<"you are eligible for voting legally"<<endl;

	}
	else cout<<"not eligible"<<endl;
	return age;
}
int main(){
	int age;
	cout<<"enter the age "<<age<<endl;
	cin>>age;
	voting(age);
	
	
	
}
