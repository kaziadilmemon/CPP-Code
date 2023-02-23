#include<iostream>
#include<string>
using namespace std;
class Animals{
	private:
		string lion,tiger,cheetah;
	public:
		string ligris,leopard;
		void setdata(string lion1,string tiger1,string cheetah1);
		void getdata(){
			cout<<"the  few sweat glands animal is "<<lion1<<endl;
			cout<<"the animal that live alone and move chiefly at night is "<<tiger1<<endl;
			cout<<"the animal that runs fast is  "<<cheetah1<<endl;
			cout<<"the animal that  don't occur in the wild is "<<ligris<<endl;
			cout<<"the animal that solitary creatures that only spend time with others when they are mating or raising young is "<<leopard<<endl;
			
		}
};
           void Animals::setdata(string lion1,string tiger1,string cheetah1){
           	lion=lion1;
           	tiger=tiger1;
           	cheetah=cheetah1;
	}
int main(){
	Animals attributes;
	attributes.ligris=ligris;
	attributes.leopard=leopard;
	attributes.setdata(lion,tiger,cheetah);
	attributes.getdata();
	return 0;
}
