#include<iostream>
using namespace std;
int main () { bool r=1;
	while(r>0){ 
	
	char a;
	float x,y;
	cout<<"entere the first  number"<<endl;
	cin>>x;
	cout<<"enter the second number "<<endl;
	cin>>y;
	cout<<"perfrom any arthmetic number"<<endl;
	cin>>a;
	if(a='+') {
	
	cout<<"the addition of x and y is "<<x+y<<endl;}
	else if(a='-') {cout<<"the subtraction of x and y is "<<x-y<<endl;
	}
	  else if(a='*') {cout<<"the multiplication of x and y is "<<x*y<<endl;
	 
	}
	else if(a='/'){cout<<"the division of x and y is "<<x/y<<endl;
	
	}
	else if(a!='+' && a!='-' && a!='*' && a!='/'){cout<<"the invalid operator"<<endl;
	
	} 
	else cout<<"input 1 to continue or 0 to discountinue"<<endl;
	cin>>r;

} return 0;
}
