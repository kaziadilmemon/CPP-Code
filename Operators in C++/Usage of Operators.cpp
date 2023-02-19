#include<iostream>
using namespace std;
int main () {
	int a=4, b= 6;
	//using first arthemetic operators
	cout<<"the value of a+b= "<<a+b<<endl;
	cout<<"the value of a-b= "<<a-b<<endl;
	cout<<"the value of a*b= "<<a*b<<endl;
	cout<<"the value of a/b= "<<a/b<<endl; //use (float) to conclude with exact result in decimal points.
	cout<<"the value of a%b= "<<a%b<<endl;
	cout<<"the value of a++= "<<a++<<endl;
	cout<<"the value of a--= "<<a--<<endl;
	cout<<"the value of ++a= "<<++a<<endl;
	cout<<"the value of --a= "<<--a<<endl;
	
	cout<<endl;
	// using comparison opeerators
	cout<<"the value of a==b is "<<(a==b)<<endl;
	cout<<"the value of a!=b is "<<(a!=b)<<endl;
	cout<<"the value of a<=b is "<<(a<=b)<<endl;
	cout<<"the value of a>=b is "<<(a>=b)<<endl;
	cout<<"the value of a<b is "<<(a<b)<<endl;
	cout<<"the value of a>b is "<<(a>b)<<endl;
	
	cout<<endl;
	//using logical operators 
	cout<<"the value of logical and operator ((a=b)&&(a<b)) is : "<<((a=b)&&(a<b))<<endl;
	cout<<"the value of logical or operator ((a=b)||(a<b)) is : "<<((a=b)||(a<b))<<endl;
	cout<<"the value of logical not operator (!(a==b))is "<<(!(a==b))<<endl;
	 
	return 0;
}
