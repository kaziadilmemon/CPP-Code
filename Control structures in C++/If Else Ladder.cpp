#include<iostream>
using namespace std;
int main() {
	int marks;
	cout<<"enter your marks";
	cin>>marks;
	if(marks<40){cout<<"you are fail reattempt it"<<endl;}
	else if ((marks>40)&&(marks<60)){cout<<"you are jsut pass. hard work now "<<endl;}
	else if ((marks>60)&&(marks<80)){cout<<"just fair "<<endl;}
	else if ((marks>80)&&(marks<90)){cout<<"keep it up (good) "<<endl;}
	else if (marks>90){cout<<"excellent "<<endl;}
	else{cout<<"you are pass"<<endl;}
	return
	 0;
	
	}
