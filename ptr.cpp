#include<iostream>

using namespace std;

class var{
	
	int a,b;
	public:
		
		var(){
		}
		var(int x, int y)
		{
			a=x;
			b=y;
		}
		
		int geta()
		{
			return a;
		}
		
		int getb()
		{
			return b;
		}
		
		void display()
		{
			cout<<"a="<<a;
			cout<<"\nb="<<b;
		}
		
};

int main()
{
	var ptr(32,43);
	var ptr2(3,23);
	
	var *a,*b;
	a=&ptr;
	b=&ptr2;
	
	cout<<"\nAdd:"<<a->geta()+b->getb();
	cout<<"\nSub:"<<a->geta()-b->getb();
	cout<<"\nMul:"<<a->geta()*b->getb();
	cout<<"\nDiv:"<<float(a->geta()/b->getb());	
	
}
