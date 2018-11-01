#include<iostream>
#include<string.h>

using namespace std;

//int count=0;

class stud{
	
	char *name;
	int score;
	int roll;
	
	public:
		
		static int count;
		
		stud()
		{
			name=new char[20];
			strcpy(name,"Vivek");
			cout<<"\n\nInitilisation done.(Default constuctor)";
			score=40;
			roll=01;
			count++;
		}
		
		stud(int a, int b, char* c)
		{
			name=new char[20];
			strcpy(name,c);
			cout<<"\n\nInitilisation done.(Paramatarised constuctor)";
			score=a;
			roll=b;
			count++;
		}
		
		stud(stud &a, char *b)
		{
			name=new char[20];
			strcpy(name,b);
			cout<<"\n\nInitilisation done.(Copy Constructor)";
			score=a.score;
			roll=a.roll;
			count++;
		}
		
		~stud()
		{
			cout<<"\n\nEnd Of scope of constructor "<<count<<".";
			count--;
			delete(name);
		}
		
		int diaplay()
		{
			cout<<"\n\nRoll :"<<roll;
			cout<<"\nName :"<<name;
			cout<<"\nScore :"<<score;
		}
};

int stud :: count;


int main()
{
	char b[10]="Human";
	char nam[10]="Ritika";
	stud A;
	
	A.diaplay();
	
	stud B(45,2,nam);
	
	B.diaplay();
	
	stud C(B,b);
	
	C.diaplay();
	
	//return 0;
}
