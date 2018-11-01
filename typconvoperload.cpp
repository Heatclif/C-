#include<iostream>

using namespace std;

class area{
	
	float l,w;
	
	public:
		
		area(){
			/*l=0;
			w=0;*/
		}
		
		area(int a, int b)
		{
			l=a;
			w=b;
		}
		
		area operator +(area &A)
		{
			return area((l+A.l),(w+A.w));
		}
		
		void show()
		{
			cout<<"\nLength :"<<l;
			cout<<"\nWidth :"<<w;
		}
		
		operator float()
		{
			return (l * w) ;
		}
};

int main()
{
	area a1(12,10),a2(10,10),a3;
	
	a3=a1+a2;
	
	a3.show();
	
	float area;
	area=a3;
	cout<<"\nThe area is :"<<area;
	
	//return 0;
}
