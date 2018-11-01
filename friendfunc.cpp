#include<iostream>

using namespace std;

class B;
class A
{
	int num;
	
	public :
	
	void getdata()
	{
		cin>>num;
	}
	
	void putdata()
	{
		cout<<num<<endl;
	} 
	
	friend void swap(A &, B &);
};

class B
{
	int num;
	
	public :
	
	void getdata()
	{
		cin>>num;
	}
	
	void putdata()
	{
		cout<<num<<endl;
	}
	
	friend void swap(A &, B &);
};

void swap(A &x, B &y)
{
	int temp;
	temp=x.num;
	x.num=y.num;
	y.num=temp;
}

int main()
{
	A a;
	B b;
	
	a.getdata();
	b.getdata();
	
	swap(a,b);
	
	a.putdata();
	b.putdata();
	
	return 0;
	
}
