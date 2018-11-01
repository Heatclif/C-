#include<iostream>
#include<math.h>
const float pi=3.14;
using namespace std;

class circle
 {
	public:
	long rad;
	float area;
	float peremeter;
 };

int main()
{
  circle cir1;
  circle cir2;
  cout<<"\nEnter the radius of circle 1 and circle 2 :\n";
  cin>>cir1.rad;
  cout<<"\n";
  cin>>cir2.rad;
  cir1.area=pi*pow(cir1.rad,2);
  cir2.area=pi*pow(cir2.rad,2);
  if(cir1.area>cir2.area)
	 cout<<"\nCircle 1 is biggest in area.";
  else if(cir1.area==cir2.area)
	 cout<<"\nBoth the circles are equal in area.";
  else
	 cout<<"\nCircle 2 is the biggest in area.";
}