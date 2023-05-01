#include<iostream>
using namespace std;
int c=46;
int main() {
	int a=46.9;
	float b=13;
	cout<<"the value of a is "<<(int)a<<endl;
	cout<<"the value of b is "<<(float)b<<endl;
	//#########you can also write in this method###############
	cout<<"the expression is "<<a+b<<endl;
	cout<<"the expression is "<<a+(int)b<<endl;
	cout<<"the expression is "<<a+int(b)<<endl;
	


return 0;	
}

