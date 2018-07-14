#include <iostream.h>
#include <conio.h>
#include<dos.h>
void main(){
clrscr();

int x,y,a,b;

x=y=2;a=b=1;

do{

    if(x==1) a=1;

    if(x==77) a=-1;

    if(y==1) b=1;

    if(y==25) b=-1;

    x=x+a;

    y=y+b;

    gotoxy(x,y);

    cout<<"AKM";

    for(float j=0;j<70000;j++);

    gotoxy(x,y);
    delay(100);

    cout<<"   ";

}

while(!kbhit());
}
