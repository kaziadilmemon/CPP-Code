#include<iostream>
using namespace std;
float moneyreceived(int currentmoney,float factor=1.04){
	return currentmoney*factor;
}
int main(){
	int money=100000;
	cout<<"if you have "<<money<<" Rs in your bank account,you will receive"<<moneyreceived(money)<<"Rs after 1 year"<<endl;
	
	cout<<"For vip: If you have"<<money<<"Rs in your bank account,you will receive"<<moneyreceived(money,1.4)<<" Rs after 1 year";
	return 0;
}
	

