#include<iostream.h>

void main()

{
  float a,b,c,big1,big2,big3;
  cout<<"Enter three numbers :";
  cin>>a>>b>>c;
  if(a>b && a>c)
  {
	  big1=a;
	  if(b>c)
		 { big2=b;
			big3=c;
		 }
	  else
		 { big2=c;
			big3=b;
		 }
	  cout<<"\nThe number in decreasing order : "<<big1<<"  "<<big2<<"  " <<big3;
  }

  else if(b>c && b>a)
  {
	 big1=b;
	 if(a>c)
		{ big2=a;
		  big3=c;
		}
	 else
	  { big2=c;
		 big3=a;
	  }
	 cout<<"\nThe decreasing order : "<<big1<<"  " <<big2<<"  " <<big3;
  }

  else
	 cout<<"\nThe decreasing order :"<<c<<"  " <<b<<"  " <<a;
}