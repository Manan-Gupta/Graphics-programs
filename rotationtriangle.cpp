#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{

int gd=DETECT,gm;
char loc[]="C:\\TC\\BGI";
initgraph(&gd,&gm,loc);
int i,j,p,q,r;
float x1,x2,x3,y1,y2,y3,Fx,Fy;
float Sx,Sy;
float A[3][3],T[3][3],S[3][3];
printf("Enter the coordinates of triangle: \n");
printf("Enter A(x,y): ");
scanf("%f%f",&x1,&y1);
A[0][0]=x1;
A[1][0]=y1;
printf("Enter B(x,y): ");
scanf("%f%f",&x2,&y2);
A[0][1]=x2;
A[1][1]=y2;
printf("Enter C(x,y): ");
scanf("%f%f",&x3,&y3);
A[0][2]=x3;
A[1][2]=y3;
A[2][0]=A[2][1]=A[2][2]=1;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("Enter fixed point coordinates\n");
scanf("%f%f",&Fx,&Fy);
printf("enter rotation amount\n");
float angle;
scanf("%f",&angle);
angle=angle*(3.14/180);
T[0][0]=cos(angle),T[0][1]=sin(angle);
T[0][2]=-1*(Fy*sin(angle))+(Fx*(1-cos(angle)));
T[1][0]=-1*sin(angle),T[1][1]=cos(angle);
T[1][2]=(Fx*sin(angle))+(Fy*(1-cos(angle)));
T[2][0]=T[2][1]=0,T[2][2]=1;
for(p=0;p<3;p++)
	{
	for(q=0;q<3;q++)
		{
		float sum=0;
		for(r=0;r<3;r++)
			{
			sum+=T[p][r]*A[r][q];
			}
		S[p][q]=sum;
		}
	}
line(S[0][0],S[1][0],S[0][1],S[1][1]);
line(S[0][1],S[1][1],S[0][2],S[1][2]);
line(S[0][2],S[1][2],S[0][0],S[1][0]);
getch();
closegraph();
return 0;
}

