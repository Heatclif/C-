#include<iostream>

using namespace std;

class jof
{
	static int num;
	int val;
	
	public:
		
		void getdata(int a)
		{
			val = a;
			num+=2;
		}
		
		void scount()
		{
			cout<<num<<endl;
		}
		
		void incnum()
		{
			num++;
		}
};

int jof :: num;

int main()
{
	
	jof a1,a2,a3;
	
	a1.getdata(14);
	a1.scount();
	a2.getdata(34);
	a2.scount();
	a3.getdata(32);
	a3.scount();
	a3.incnum();
	a2.scount();
	return 1;
}
