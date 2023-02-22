#include<iostream>
using namespace std;

int maxima(int i,int j,int k){
	if(i>j&&i>k){
		cout<<" first number is greatest"<<i<<endl;
	}
	if(j>k&&j>i){
		cout<<"second number is greatest"<<j<<endl;
	}
	if(k>i&&k>j){
		cout<<"third number is greatest"<<k<<endl;
	}
	return i,j,k;
}

int minima(int i,int j,int k){
	if(i<j&&i<k){
		cout<<" first number is smallest"<<i<<endl;
	}
	if(j<k&&j<i){
		cout<<"second number is smallest"<<j<<endl;
	}
	if(k<i&&k<j){
		cout<<"third number is smallest"<<k<<endl;
	
}
return i,j,k;
}

int main(){
	int i,j,k;
	cin>>i>>j>>k;
	maxima(i,j,k);
	minima(i,j,k);
	return 0;
}
