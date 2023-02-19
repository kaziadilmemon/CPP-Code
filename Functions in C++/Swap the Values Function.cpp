#include<iostream>
using namespace std;
	int swap(int a,int b){
		cout<<" the value of a before "<<a<<endl<<"the value of b before is "<<b<<endl;
		int c;
		c=a;
		a=b;
		b=c;
		cout<<" the value of a after "<<a<<endl<<"the value of b after "<<b<<endl;
	}
	
	
	int main(){ 
	int a,b;
		 a=2;
		b=5;
		swap(a,b);
		return 0;
	}
