#include<iostream>
using namespace std;
class employee{
	public:
		string name;
		string company;
		int age;
	void  yourself(){
		cout<<"Name -"<<name<<endl;
		cout<<"Company -"<<company<<endl;
		cout<<"Age -"<<age<<endl;
		
	}
	employee(string name,string company,string int age){
		Name=name;
		Company=company;
		Age=age;
	}
};
int main(){
	employee employee1=employee("saldina","YT-code beauty",25);
	employee1.yourself();
	employee employee2=employee("john","Amazon",35);
	employee2.yourself();
}

