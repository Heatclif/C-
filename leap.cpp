  #include<iostream.h>
  using namespace std;

	int main()
	{
	  int year;
	  char ch;
	  do
	  {
		 cout<<"\n\nEnter the year : ";
		 cin>>year;

		 if( year%400==0 || year%100!=0 && year%4==0 )
			{ cout<<"It is a leap year";
			}
		 else
			{ cout<<"It is not a leap year";
			}
		 cout<<"\n\nDo you Want To Continue : (y/n)";
		 cin>>ch;

	  }while(ch=='y') ;
	}
