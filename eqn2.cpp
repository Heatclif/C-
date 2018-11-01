/* find the sum of series :
   (b) x-(x^2)/2!+(x^3)/3!-(x^4)/4!+............+(x^n)/n!
*/

#include<iostream.h>
#include<math.h>

void main()
{
  float a,b,sum,sum1,sum2,n,x,fact=1;
  int i;
  cout<<"Enter the value of x and limit :";
  cin>>x>>n;
  sum1=sum2=0;
  for(i=1;i<=n;i++)
  {
	 fact=fact*i;
	 if(i%2==1)
	  { a=pow(x,i)/fact;
		 sum1=sum1+a;
	  }
	 else
	  { b=-pow(x,i)/fact;
		 sum2=sum2+b;
	  }

  }
  sum=sum1+sum2;
  cout<<"\n\nThe result = "<<sum;

}