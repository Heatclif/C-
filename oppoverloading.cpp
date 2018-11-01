#include<iostream>

using namespace std;

class sum{
	
	int a;
	int b;
	
	public:
		sum()
		{
			a=0;
			b=0;
		}
		
		sum(int x, int y)
		{
			a=x;
			b=y;
		}
		
		sum operator+(sum &n)
		{
			return sum((a+n.a),(b+n.b));
		}
		
		void display()
		{
			cout<<"\n a="<<a<<"\n b="<<b;
		}
};

int main()
{
	sum s1,s2,s3;
	
	s1=sum(12,10);
	s2=sum(8,10);
	s3=s1+s2;
	
	sum s4;
	
	s4=sum(23,54);
	
	s4.display();
	s3.display();
}
