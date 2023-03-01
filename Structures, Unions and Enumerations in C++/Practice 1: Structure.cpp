#include<iostream>
using namespace std;
struct store{

int itemscarreid;
float totalbill;
float tax; 
 };
int main(){
      	 store adil;
	adil.itemscarreid=3;
	adil.totalbill=3400;
	adil.tax=3.4;
	cout<<"the value of adil's items carried"<<adil.itemscarreid<<endl;
	cout<<"the value of adil's total bill "<<adil.totalbill<<endl;
	cout<<"the value of adil's tax "<<adil.tax<<endl;
	return 0;
}
