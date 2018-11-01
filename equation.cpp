/* Finding the sum of series :
	(a) x+(x^3)/3+(x^4)/4+(x^5)/5+................+(x^n)/n
*/

#include<iostream.h>
#include<math.h>

void main()
{
  float sum,a,x,n,b;
  cout<<"Enter the value of x and the limit of equation :";
  cin>>x>>n;
  sum=0;
  for(int i=1;i<=n;i++)
  {
	 b=pow(x,i)/i;
	 sum=sum+b;
  }
  cout<<"\n\nThe sum of series = "<<sum;

}