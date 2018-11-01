#include<iostream>

using namespace std;

const int size=3;

class vector{
	
	int v[size];
	
	public:
		
		vector();
		vector(int *);
		
		friend vector operator *(int a,vector b);
		friend vector operator *(vector a,int b);
		
		friend istream &operator >>(istream &, vector &);
		friend ostream &operator <<(ostream &, vector &);		
};

vector :: vector()
{
	for(int i=0; i<size; ++i)
	{
		v[i]=0;
	}
}

vector :: vector(int *a)
{
	for(int i=0; i<size ; ++i)
	{
		v[i]=a[i];
	}
}

vector operator *(int a,vector b)
{
	vector c;
	
	for(int i=0; i<size; ++i)
	{
		c.v[i]=a * b.v[i];
	}
	
	return c;
}

vector operator *(vector a,int b)
{
	vector c;
	
	for(int i=0; i<size; ++i)
	{
		c.v[i]=b * a.v[i];
	}
	
	return c;
}

istream &operator >>(istream &din, vector &b)
{
	for(int i=0; i<size; ++i)
	{
		din>>b.v[i];
	}	
	
	return din;
}

ostream &operator <<(ostream &dout, vector &b)
{
	cout<<"{ ";
	for(int i=0; i<size; ++i)
	{
		cout<<b.v[i]<<" ";
	}
	cout<<" }";
	
	return dout;
}

int x[size]={2,4,6};

int main()
{
	vector m;
	vector n=x;
	
	cout<<"\nEnter the elements of vector m :\n";
	cin>>m;
	
	cout<<"m="<<m<<"\n"; 
	
	vector p,q;
	
	p=2*m;
	q=n*2;
	
	cout<<"\n";
	cout<<"p="<<p<<"\n";
	cout<<"q="<<q<<"\n";
	
	return 0;
}
