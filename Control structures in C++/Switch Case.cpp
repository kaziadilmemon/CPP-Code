#include<iostream>
using namespace std;
int main() {
	int marks;
	cout<<"enter your marks";
	cin>>marks;
	switch(marks) 
	{ 
	case 40: 
	cout<<"you are just pass"<<endl;
	break;
	case 60:
	cout<<"fair progress"<<endl;
	break;
	case 80:
	cout<<"keep it up"<<endl;
	break; 
	case 90:
	cout<<"excellent"<<endl;
	default:
	cout<<"no any special case"<<endl;
	break;
	}
	
	return
	 0;
	
	}
	
