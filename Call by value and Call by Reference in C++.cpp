#include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}
void swap(int*a, int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=4;
	 int y=5;
	cout<<"the value of x is"<<x<<" and the valeu of y is"<<y<<endl;
	cout<<sum(x,y);
	swap(x,y);
	cout<<"the value of x is"<<x<<" and the valeu of y is"<<y<<endl;
	return 0;
	
	
}
