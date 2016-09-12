#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h>


void TicTacToe();
void Casino();
void Snake_n_ladder();
void Hungman();


/* helping functions*/

void draw_line(int n,char ch);

void rulesCasino();

void rulesHungman();


/*func for snake n ladder*/


void draw_line(int n,char ch);
void board();
void gamescore(char name1[],char name2[],int p1, int p2);
void play_dice(int &score);



/* for tic tac toe*/


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void ticboard();






void main()
{/*start  of main*/

int choice,next=1;
cout<<"\n ***************Hii! friends  welcome to GameStation******************";
cout<<"\n\n";
while(next)
{
cout<<"******************Game Menu***********************";
cout<<"\n\n";
cout<<"\n 1.  TIC TAC TOE  \n 2.SNAKE_N _LADDER \n 3.HUNGMAN \n 4.CASINO\n";
cout<<"\n enter ur choice plz";
cin>>choice;
switch(choice)
{
case(1):
     TicTacToe();
break;
case(2):
    Snake_n_ladder();
break;
case(3):
    Hungman();
break;
case(4):
    Casino();
break;
default:
    cout<<" \n wrong choice";
}
cout<<"\n************ enter 1 to continue or 0 exit***********\n ";
cin>>next;

}
cout<<"\n **********THANKYOU**********";


/*end of main*/
}


void TicTacToe()
{
	int player = 1,i,choice;
	char mark;
	clrscr();
	do
	{
		ticboard();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	ticboard();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
	getch();
	return;
}








void Casino()
{
  int balanceamt,amt,no,dice;
  char playername[80],ch;
  clrscr();

  draw_line(60,'=');
  cout<<"\n\n\n\n\t\tCASINO GAME\n\n\n\n";
  draw_line(60,'=');
  cout<<"\n\n\nEnter Your Name  :";
  gets(playername);
  cout<<"\n\n\Enter Deposit amount to play game :";
  cin>>balanceamt;
  do
  {
    clrscr();
    rulesCasino();
    cout<<"\n\nYour current balance is Rs."<<balanceamt;
    do
    {
	cout<<"\n\n"<<playername<<" enter money to bet";
	cin>>amt;
	if(amt>balanceamt)
	   cout<<"Your betting amount is more than your current balance\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
    do
    {
	cout<<"Enter your lucky number to bet between 1 to 12 :";
	cin>>no;
	if(no<=0||no>12)
	   cout<<"Please check the number!! should be between 1 to 12\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
  randomize();
  dice=random(12)+1;
  if(dice==no)
  {
    cout<<"\n\nGood Luck!! You won Rs."<<amt*10;
    balanceamt=balanceamt+amt*10;
  }
  else
  {
     cout<<"Bad Luck this time !! You lose Rs."<<amt;
     balanceamt=balanceamt-amt;
  }
  cout<<"\n\nThe winning number was : "<<dice;

  cout<<"\n\n\t"<<playername<<" You have Rs. "<<balanceamt<<endl;
  cout<<"\n\n-->Do you want to play (y/n)? ";
  cin>>ch;
  }while(ch=='Y'|| ch=='y');
  clrscr();
  cout<<"\n\n\n";
  draw_line(70,'+');
  cout<<"\n\n\t\THANKS FOR COME TO CASINO YOUR BALANCE AMOUNT IS RS."<<balanceamt<<"\n\n";
  draw_line(70,'+');
  getch();

}




void Hungman()
{
  int balanceamt,amt,no,dice;
  char playername[80],ch;
  clrscr();
  draw_line(60,'=');
  cout<<"\n\n\n\n\t\tCASINO GAME\n\n\n\n";
  draw_line(60,'=');
  cout<<"\n\n\nEnter Your Name  :";
  gets(playername);
  cout<<"\n\n\Enter Deposit amount to play game :";
  cin>>balanceamt;
  do
  {
    clrscr();
    rulesHungman();
    cout<<"\n\nYour current balance is Rs."<<balanceamt;
    do
    {
	cout<<"\n\n"<<playername<<" enter money to bet";
	cin>>amt;
	if(amt>balanceamt)
	   cout<<"Your betting amount is more than your current balance\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
    do
    {
	cout<<"Enter your lucky number to bet between 1 to 12 :";
	cin>>no;
	if(no<=0||no>12)
	   cout<<"Please check the number!! should be between 1 to 12\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
  randomize();
  dice=random(12)+1;
  if(dice==no)
  {
    cout<<"\n\nGood Luck!! You won Rs."<<amt*10;
    balanceamt=balanceamt+amt*10;
  }
  else
  {
     cout<<"Bad Luck this time !! You lose Rs."<<amt;
     balanceamt=balanceamt-amt;
  }
  cout<<"\n\nThe winning number was : "<<dice;

  cout<<"\n\n\t"<<playername<<" You have Rs. "<<balanceamt<<endl;
  cout<<"\n\n-->Do you want to play (y/n)? ";
  cin>>ch;
  }while(ch=='Y'|| ch=='y');
  clrscr();
  cout<<"\n\n\n";
  draw_line(70,'+');
  cout<<"\n\n\t\THANKS FOR COME TO CASINO YOUR BALANCE AMOUNT IS RS."<<balanceamt<<"\n\n";
  draw_line(70,'+');
  getch();
}






void Snake_n_ladder()
{
  int player1=0,player2=0,lastposition;
  char player1name[80],player2name[80];
  clrscr();
  randomize();
  draw_line(50,'=');
  cout<<"\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n";
  draw_line(50,'=');
  cout<<"\n\n\nEnter Name of player 1 :";
  gets(player1name);
  cout<<"\n\n\Enter Name of player 2 :";
  gets(player2name);
  while(player1<=100 && player2<=100)
  {
    board();
    gamescore(player1name,player2name,player1,player2);
    cout<<"\n\n--->" <<player1name<<" Now your Turn >> Press any key to play ";
    getch();
    lastposition=player1;
    play_dice(player1);
    if(player1<lastposition)
       cout<<"\n\aOops!! Snake found !! You are at postion "<<player1<<"\n";
    else if(player1>lastposition+6)
       cout<<"\nGreat!! you got a ladder !! You are at position "<<player1;
    cout<<"\n\n--->"<<player2name<<" Now your Turn >> Press any key to play ";
    getch();
    lastposition=player2;
    play_dice(player2);
    if(player2<lastposition)
       cout<<"\n\n\aOops!! Snake found !! You are at position "<<player2<<"\n";
    else if(player2>lastposition+6)
       cout<<"\n\nGreat!! you got a ladder !! You are at position "<<player2<<"\n";
    getch();
  }
  clrscr();
  cout<<"\n\n\n";
  draw_line(50,'+');
  cout<<"\n\n\t\tRESULT\n\n";
  draw_line(50,'+');
  cout<<endl;
  gamescore(player1name,player2name,player1,player2);
  cout<<"\n\n\n";
  if(player1>=player2)
    cout<<player1name<<" !! You are the winner of the game\n\n";
  else
    cout<<player2name<<" !! You are the winner of the game\n\n";
  draw_line(50,'+');
  getch();
}




void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
   cout<<ch;
}

void rulesCasino()
{
  clrscr();
  cout<<"\n\n";
  draw_line(60,'-');
  cout<<"\n\t\tRULES OF THE GAME\n";
  draw_line(60,'-');
  cout<<"\n\t1. Choose any number between 1 to 12\n\t2. If you win you will get 10 times of money you bet\n\t3. If you bet on wrong number you will lose your betting amount\n\n";
  draw_line(60,'-');
  cout<<endl;
}

void rulesHungman()
{
  clrscr();
  cout<<"\n\n";
  draw_line(60,'-');
  cout<<"\n\t\tRULES OF THE GAME\n";
  draw_line(60,'-');
  cout<<"\n\t1. Choose any number between 1 to 12\n\t2. If you win you will get 10 times of money you bet\n\t3. If you bet on wrong number you will lose your betting amount\n\n";
  draw_line(60,'-');
  cout<<endl;
}


void board()
{
  clrscr();
  cout<<"\n\n";
  draw_line(50,'-');
  cout<<"\n\t\tSNAKE AT POSITION\n";
  draw_line(50,'-');
  cout<<"\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to  1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to  7\n\tFrom 52 to 11\n\tFrom 48 to  9\n\tFrom 46 to  5\n\tFrom 44 to 22\n\n";
draw_line(50,'-');
  cout<<"\n\t\t LADDER AT POSITION\n";
  draw_line(50,'-');
  cout<<"\n\tFrom  8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
  draw_line(50,'-');
  cout<<endl;
}

void gamescore(char name1[],char name2[],int p1, int p2)
{
  cout<<"\n";
  draw_line(50,'~');
  cout<<"\n\t\tGAME STATUS\n";
  draw_line(50,'~');
  cout<<"\n\t--->"<<name1<<" is at position "<<p1<<endl;
  cout<<"\t--->"<<name2<<" is at position "<<p2<<endl;
  draw_line(50,'_');
  cout<<endl;
}

void play_dice(int &score)
{
  int dice;
  dice=random(6)+1;
  cout<<"\nYou got "<<dice<<" Point !! ";
  score=score+dice;
  cout<<"Now you are at position "<<score;
  switch(score)
  {
   case 98 :score=28;break;
   case 95 :score=24;break;
   case 92 :score=51;break;
   case 83 :score=19;break;
   case 73 :score=1;break;
   case 69 :score=33;break;
   case 64 :score=36;break;
   case 59 :score=17;break;
   case 55 :score=7;break;
   case 52 :score=11;break;
   case 48 :score=9;break;
   case 46 :score=5;break;
   case 44 :score=22;break;
   case 8  :score=26;break;
   case 21 :score=82;break;
   case 43 :score=77;break;
   case 50 :score=91;break;
   case 54 :score=93;break;
   case 62 :score=96;break;
   case 66 :score=87;break;
   case 80 :score=100;
 }
}


/* tic tac toe funcs */
int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}




void ticboard()
{
	clrscr();
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}

