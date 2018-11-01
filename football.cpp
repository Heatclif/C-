/*
	THIS PROGRAM IS DEVELOPED BY VIVEK BISWAS OF CLASS 11-A 2015-2016.
	NO HAS THE RIGHT TO COPY THIS TO ANOTHER PROGRAM OR COMPUTER.
	THIS IS A COPYRIGHT PROGRAM COPYING THIS IS A PUNISHABLE OFFENCE.
	PRATCING SO MIGHT LEAD TO THE DOER LIFETIME IMPRISONMENT IN CELLULAR
	JAIL IN ANDAMAN.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;

void match();
void goal();
void extra();

int main()
{
  int our,opp,z,y;
  char team[40];
  cout<<"\n\nTHIS PROGRAM IS DEVELOPED BY VIVEK BISWAS OF CLASS 11-A 2015-2016."
		<<"\nNO ONE HAS THE RIGHT TO COPY THIS TO ANOTHER PROGRAM OR COMPUTER."
		<<"\nTHIS IS A PROGRAM FOR PERSONAL FUN. COPYING THIS IS A PUNISHABLE OFFENCE."
		<<"\nPRATCING SO MIGHT LEAD TO THE DOER LIFETIME IMPRISONMENT IN CELLULAR"
		<<"\nJAIL IN ANDAMAN.";

  cout<<"\n\n\n\n\n\n\n\nPress 1 to continue :";
  cin>>y;
  cout<<"\T\TFOOTBALL MATCH";
  cout<<"\n\n\nEnter Your Team Name (IN UPPER CASE):";
  cin.getline(team,40);
  //clrscr();
  cout<<"                FOOTBALL FEDRATION";
  cout<<"\n\nON 23 DECEMBER 1990, THE FOOTBALL TEAM "<<team<<" HAD ITS FINAL MATCH WITH "<<"\nFC MADRID... "<<"\n\nTHE MOST STRONGEST TEAM OF LIGA BBVA !!!!!!!";
  cout<<"\n\nEVERYONE GAVE THEIR FULL POTENTIAL TO WIN THE MATCH...."<<"\n\nBUT THE MATCH SCORE ENDED WITH 2:2"<<"\n\nTHE GAME WAS TO BE DECIDED WITH PENALTIES!!!!!";
  cout<<"\n\nEnter 1 to continue...";
  cin>>z;
  goal();
  match();
}


void match()
{ int a;

  int i,shoot,block,block1,shoot1,us=0,opp=0;
  cout<<"\n\n\nThis is the GOAL POST.......";
  cout<<"\n\nBOTH THE TEAMS HAVE 5 CHANCES TO SHOOT..."<<"\nTHE MAXIMUM SCORER WILL WIN LIGA BBVA..... ";
  cout<<"\n\nCLICK ON THE RESPECTIVE NUMBERS TO SHOOT........";
  for(i=1;i<=5;i++)
	{ cout<<"\n\nITS YOUR TURN TO SHOOT...";
	  cout<<"\n\nENTER THE NUMBER TO SHOOT :";
	  cin>>shoot;
	  if(shoot>6)
		{ //clrscr;
		  cout<<"\n\nTHE BALL WENT WIDE.......";
		  cout<<"\nThe score is "<<us<<":"<<opp;
		}
	  else
	  { block=rand()%6+0;
		//clrscr();
		goal();
		if(block==shoot||block==shoot-1)
		{ cout<<"\n\nITS A BLOCK !!!!!!!!!!";
		  cout<<"\nThe score is "<<us<<":"<<opp;
		}
	  else
		{ cout<<"\n\nITS A GOAL !!!!!!!!!!";
		  us++;
		  cout<<"\nThe score is "<<us<<":"<<opp;
		}
	 }
	  cout<<"\n\nITS FC MADRID'S TURN TO SHOOT";
	  cout<<"\n\nNOW PRESS NUMBER TO BLOCK :";
	  cin>>block1;
	  shoot1=rand()%6+0;
	  //clrscr();
	  goal();
	  if(block1==shoot1||block1==shoot1-1)
		{ cout<<"\n\nOH! A CLEAN SAVE BY CASSILAS .....";
		  cout<<"\nThe score is "<<us<<":"<<opp;
		}
	  else
		{ cout<<"\n\nITS A CLEAN GOAL.......";
		  opp++;
		  cout<<"\nThe score is "<<us<<":"<<opp;
		}
	}

	  cout<<"\n\nTHE GAME IS OVER....";
	  if(us>opp)
		{ cout<<"\n\nTHE SCORE IS "<<us<<":"<<opp;
		  cout<<"\n\nYOU WON THE LEAGUE......"<<"\nCONGRULATIONS !!!!!!!!!!!";
		}
	  else if(us<opp)
		{ cout<<"\n\nTHE SCORE IS "<<us<<":"<<opp;
		  cout<<"\n\nYOU LOOSE THE LEAGUE......"<<"\nBETTER LUCK NEXT YEAR !!!!!!!!!!!";
		}
	  else
		{
			extra();
		}


}


void goal()
{
  cout<<"    \n\n   #########################################################||  ";
  cout<<"	\n  #.......................................................# ||  ";
  cout<<" \n||######################################################|| #||  ";
  cout<<" \n||..................|.....................|.............|| #||  ";
  cout<<" \n||........ 5 .......|......... 3 .........|...... 1 ....|| #||  ";
  cout<<" \n||..................|.....................|.............|| #||  ";
  cout<<" \n||------------------|---------------------|-------------|| #||  ";
  cout<<" \n||------------------|---------------------|-------------|| #||  ";
  cout<<" \n||..................|.....................|.............|| #||  ";
  cout<<" \n||....... 6 ........|......... 4 .........|....... 2 ...|| #||  ";
  cout<<" \n||..................|.....................|.............|| ##   ";
  cout<<" \n||..................|.....................|.............|| #    ";
}

void extra()
{
  cout<<"\nTHE SCORE AFTER 5 PENALTIES ARE SAME ..... ";
  cout<<"\n\nNOW YOU HAVE TO USE YOUR FOOT SOME MORE ...... : ";
  match();
}


