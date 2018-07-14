#include<graphics.h>
#include<stdio.h>
#include<time.h>
int main()
{
  int gd=DETECT;
  int gm;
  char loc[]="C:\\TC\\BGI"; char a1[]="1"; char a2[]="2"; char a3[]="3"; char a4[]="4"; char a5[]="5"; char a6[]="6";
  char a7[]="7"; char a8[]="8"; char a9[]="9"; char a10[]="10"; char a11[]="11"; char a12[]="12";
  initgraph(&gd,&gm,loc);
  int chrx[12]={50,87,100,87,50,0,-50,-87,-100,-87,-50,0};
  int chry[12]={-87,-50,0,50,87,100,87,50,0,-50,-87,-100};

  int cminsecx[60]={0,18,35,53,69,85,100,114,126,138,147,155,162,166,169,170,169,166,162,155,147,138,126,114,100,85,
		    69,53,35,18,0,-18,-35,-53,-69,-85,-100,-114,-126,-138,-147,-155,-162,-166,-169,-170,-169,-166,-162,
		    -155,-147,-138,-126,-114,-100,-85,-69,-53,-35,-18};

  int cminsecy[60]={-170,-169,-166,-162,-155,-147,-138,-126,-114,-100,-85,-69,-53,-35,-18,0,18,35,53,69,85,100,114,126,138,
		    147,155,162,166,169,170,169,166,162,155,147,138,126,114,100,85,69,53,35,18,0,-18,-35,-53,-69,-85,-100,
		    -114,-126,-138,-147,-155,-162,-166,-169};

  time_t rawtime;
  struct tm * currenttime;
  char a[100];
  int midx=getmaxx()/2;
  int midy=getmaxy()/2;

  int ims;

  while(1)
  {

  rawtime=time(NULL);
  currenttime=localtime(&rawtime);

  setcolor(WHITE);
  circle(midx,midy,200);
  circle(midx,midy,220);
  setcolor(WHITE);
  outtextxy(midx+95+(-5),midy-165,a1);
  outtextxy(midx+165+(-5),midy-95+(-5),a2);
  outtextxy(midx+190+(-5),midy+0+(-7),a3);
  outtextxy(midx+165+(-7),midy+95+(-7),a4);
  outtextxy(midx+95+(-5),midy+165+(-10),a5);
  outtextxy(midx+0+(-3),midy+190+(-10),a6);
  outtextxy(midx-95+(0),midy+165+(-10),a7);
  outtextxy(midx-165+(-2),midy+95+(-10),a8);
  outtextxy(midx-190+(-3),midy+0+(-7),a9);
  outtextxy(midx-165+(-5),midy-95+(-3),a10);
  outtextxy(midx-95+(-5),midy-165,a11);
  outtextxy(midx+0+(-6),midy-190,a12);

  strftime(a,100,"%I",currenttime);
  sscanf(a,"%d",&ims);
  setcolor(DARKGRAY);
  line(midx,midy,midx+chrx[ims-1],midy+chry[ims-1]);

  strftime(a,100,"%M",currenttime);
  sscanf(a,"%d",&ims);
  setcolor(WHITE);
  line(midx,midy,midx+cminsecx[ims],midy+cminsecy[ims]);

  strftime(a,100,"%S",currenttime);
  sscanf(a,"%d",&ims);
  setcolor(BROWN);
  line(midx,midy,midx+cminsecx[ims],midy+cminsecy[ims]);

  delay(1000);
  cleardevice();
  }


  getch();
  closegraph();

}
