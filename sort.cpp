#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[5];
int mini,temp;
cout<<"Enter 5 numbers: "<<endl;
for(int i=0; i<5; i++)
{
cin>>arr[i];
}
cout<<"Orignal entered numbers: "<<endl;
for(int j=0; j<5; j++)
{
cout<<arr[j];
cout<<endl;
}
for(int r1=0;r1<4;r1++)
{
mini=r1;
for(int r2=r1+1; r2<5; r2++)
if(arr[r2]<arr[mini])
mini=r2;
if(mini !=r1)
{
temp=arr[r1];
arr[r1]=arr[mini];
arr[mini]=temp;
cout<<"\n\nIn between";
for(int q=0; q<5; q++)
{
cout<<arr[q];
cout<<endl;
}
}
}
cout<<"Array sorted by selection sort is: "<<endl;
for(int q=0; q<5; q++)
{
cout<<arr[q];
cout<<endl;
}
getch();
return 0;
}