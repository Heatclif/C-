#include<iostream>
using namespace std;

int main()
{
	char num[30];
	int count=0;
	
	cout<<"Enter a number in alphabets(e.g.Five Hundred Ten):";
	cout<<"\nThe number should be between 0 to 100000 :\n";
	
	cin.getline(num,30);
	
	for(int i=0;num[i]!='\0';i++)
	    {
		     if(num[i]=='a')
		     
		     count++;
		    
		}
	
	  if(count>0)
		     cout<<"\nThe number entered is greater than 1000....";
		     else
		     cout<<"\nThe number u entered is less than 1000....";
		
	return(0);	
}
