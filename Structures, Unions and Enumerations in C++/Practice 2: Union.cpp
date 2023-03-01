#include<iostream>
using namespace std;
union balance{
	float currentamount;
	float totalamount;
	
};
int main(){
	balance b1;
	b1.currentamount=34;
	cout<<"current amount of b1  "<<b1.currentamount;
	return 0;
}
