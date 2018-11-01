#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
//#include<dos.h>
using namespace std;
int main()
{
  char n1[20],n2[20];
  cout<<"Friendship Calculator!!!!!!!";
  cout<<"\n Enter Your Name: ";
  cin>>n1;
  cout<<"\n Enter Your Crush Name: ";
  cin>>n2;

  strcat(n1,n2);
  for(int i=0;i<strlen(n1);i++)
  { n1[i]=toupper(n1[i]);
  }

  for(int k=0;k<strlen(n1);k++)   //Removing common numbers
  {
	 for(int i=0;i<strlen(n1);i++)
		{ for(int j=0;j<strlen(n1);j++)
			{
			  if(i==j)
			  continue;
			  else if(n1[i]==n1[j])
			  n1[j]=n1[j+1];
			 }
		}
  }

  int sum=0;
  for(int l=0;l<strlen(n1);l++)  // Assigning ASCII
	 sum+=n1[l];
	  cout<<"Love percent: ";
  cout<<sum%101<<" %  GUARANTEED !";
  getch();

  }