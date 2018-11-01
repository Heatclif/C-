#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

class travell
{
   char travellname[40];
   int adults;
   int children;
   int distance;
   float fare;
  public:
    travell ()
   {
    //travellname=" ";
    adults=0;
    children=0;
    distance=0;
    fare=0.0;
   }
   void getdata();
   void farecal();
   void display();
}T;

void travell::getdata()
{
 cout<<"\nEnters Name of Travels :";
 gets(travellname);
 cout<<"\nEnter No. of Adults :";
 cin>>adults;
 cout<<"\nEnter No. of Childrn :";
 cin>>children;
 cout<<"\nDistance Travelled (In Km) :";
 cin>>distance;
}

void travell::farecal()
{
  if(distance>=1000)
    {
      fare=(adults*700)+(children*350);
    }
  else if(distance>=500 && distance<1000)
    {
      fare=(adults*500)+(children*250);
    }
  else
    {
      fare=(adults*300)+(children*150);
    }

}

void travell::display()
{
 cout<<"\n1) Travels : "<<travellname;
 cout<<"\n\n2) No. Of Adults : "<<adults;
 cout<<"\n\n3) No. Of Children : "<<children;
 cout<<"\n\n4) Distance Travelled (In Km) : "<<distance;
 cout<<"\n\n5) Total Fare :Rs."<<fare;
}

int main()
{
  clrscr();
  T.getdata();
  T.farecal();
  clrscr();
  T.display();
  return 0;
}