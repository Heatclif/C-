#include<iostream>

using namespace std;

class bill;

class shop
{
	int code;
	//int no;
	float price;
	
	public:
		shop()
		{
			code=0;
			//no=0;
			price=0;
		}
		
		shop(int a, /*int b*/ float c)
		{
			code=a;
			//no=b;
			price=c;
		}
		
		int getcode()
		{
			return code;
		}
		
		float getprice()
		{
			return (price);
		}
		
		operator float()
		{
			int amt;
			cout<<"Enter the ammount:";
			cin>>amt;
			
			return (amt*price);
		}
		
		/*operator bill()
		{
			bill temp;
			
			int amt;
			temp.code=code;
			cout<<"Enter the ammount :";
			cin>>amt;
			temp.value=amt*price;
			
			return temp; 	
		}*/
};

class bill
{
	int code;
	float value;
	
	public:
		
		bill()
		{
			code=0;
			value=0.0;	
		}
		
		/*
		bill(int a, float b)
		{
			code=a;
			value=b;
		}
		*/
		
		bill(shop &s)
		{
			int amt;
			code=s.getcode();
			cout<<"Enter Ammount (price : "<<s.getprice()<<"): ";
			cin>>amt;
			value=amt*(s.getprice());
			
		}
		
		friend ostream &operator<<(ostream &out, bill &b)
		{
			out<<"\nCode : "<<b.code<<"\nValue : "<<b.value;
		}
};

int main()
{
	int code;
	float price;
	
	cout<<"Enter code and price :";
	cin>>code>>price;
	shop S(code,price);
	
	bill B;
	
	//float val;
	//val=S;
	
	B=S;
	
	//cout<<"Total Vall : "<<val<<endl;
	
	cout<<B;
	
	return 0; 
}

