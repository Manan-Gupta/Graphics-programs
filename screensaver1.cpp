#include<iostream>
#include<windows.h>
HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
void clr(int y){SetConsoleTextAttribute(out,y);}
void go(int a,int b){COORD cord; cord.X = a; cord.Y = b; SetConsoleCursorPosition(out,cord);}
using namespace std;
void G(int x,int y)
{go(x,y);cout<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(219)<<endl;  y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(32)<<endl;  y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(223)<<char(219)<<endl; y++;
go(x,y);cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<endl;}
void A(int x,int y)
{go(x,y);cout<<char(220)<<char(220)<<char(220)<<char(220)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(219)<<endl; y++;
go(x,y);cout<<char(219)<<char(220)<<char(220)<<char(219)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(219)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(219)<<endl;}
void M(int x,int y)
{go(x,y);cout<<char(219)<<char(220)<<char(32)<<char(220)<<char(219)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(287)<<char(32)<<char(219)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(219)<<endl;  y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(219)<<endl;  y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(219)<<endl;}
void E(int x,int y)
{go(x,y);cout<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(32)<<endl;  y++;
go(x,y);cout<<char(219)<<char(205)<<char(205)<<char(32)<<char(32)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(32)<<endl;  y++;
go(x,y);cout<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<endl;}
void R(int x,int y)
{go(x,y);cout<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(32)<<char(219)<<endl;  y++;
go(x,y);cout<<char(219)<<char(220)<<char(220)<<char(220)<<char(219)<<endl; y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(219)<<char(32)<<endl;  y++;
go(x,y);cout<<char(219)<<char(32)<<char(32)<<char(219)<<char(220)<<endl;}
int main()
{
 int X=0,x1,x2,x3,x4,x5,x6,y=5; x1=0; x2=6; x3=12; x4=18; x5=24; x6=30;
 for (int i=0;i<1;)
 {clr(9);go(x1,y);G(x1,y);if(x1>72){x1=1;}x1++;clr(12);go(x2,y);A(x2,y);if(x2>72){x2=1;}x2++;
  clr(6);go(x3,y);M(x3,y);if(x3>72){x3=1;}x3++;clr(9);go(x4,y);M(x4,y);if(x4>72){x4=1;}x4++;
  clr(10);go(x5,y);E(x5,y);if(x5>72){x5=1;}x5++;clr(12);go(x6,y);R(x6,y);if(x6>72){x6=1;}x6++;
  if(x1==2){y+=3;} if(y>50){y=3;}system("cls");}
 return 0;
}
