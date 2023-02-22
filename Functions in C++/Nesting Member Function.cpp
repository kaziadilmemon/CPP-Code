#include<iostream>
#include<string>
using namespace std;
class binary
{
	private:
		string s;
	public:
		void read(void);
		void chkbin(void);
		void onescompliment(void);
		void display(void);
};
           void binary::read(void)
           {
           	cout<<"enter a binary number"<<endl;
           	cin>>s;
	}
	void binary::chkbin(void)
	{
	
	for(int i=0;i<s.length();i++)
	{ 
	if(s.at(i)!='0'&&s.at(i)!='1')
	{
		cout<<" Incorrect binary format"<<endl;
		exit(0);
	}
	}
           }
           void binary::onescompliment(void)
	{ 
	for(int i=0;i<s.length();i++)
	{
		if(s.at=='0')
		{
			s.at(i)=1;
		}
		else s.at(i)='0';
	}
	}
	}
	void binary::display(void)
	{
		cout<<"displaying your number"<<endl;
		for(int i=0;i<s.length();i++){
			cout<<s.at(i);
		}
		cout<<endl;
	}
	int main(){
		binary b;
		b.read();
		b.chkbin();
		b.onescompliment();
		b.display();
		return 0;
	}
	}
	
           \	
		
	
