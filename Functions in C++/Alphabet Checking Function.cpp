#include<iostream>
using namespace std;
char alpha(char a){
	if(a>='a'&&a<='z')
		cout<<"alphabet"<<endl;
	else if(a>='A'&&a<='Z')
		cout<<"alphabet"<<endl;
	else
	 cout<<"not an alphabet"<<endl;
          return a;    
	}

int main() {
	 char a;
	 cout<<"enter the character: ";
	 cin>>a;
	 alpha(a);
	 return 0;
}
