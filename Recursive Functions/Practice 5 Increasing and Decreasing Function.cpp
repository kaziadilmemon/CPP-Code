#include<iostream>
using namespace std;

void dec(int n ){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	dec(n-1);
}

void inc(int n){
	if(n==1){
		return 1;
	}
	inc(n-1);
	cout<<n<<endl;
}

int main()
{
	int n;
	inc(n)<<endl;
	dec(n)<<endl;
	return 0;
	
}
