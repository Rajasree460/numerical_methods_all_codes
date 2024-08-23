/*EULAR'S MODIFIED METHOD*/
#include<stdio.h>
#include<math.h>
#define F(x,y) (x)*(x)+(y)
int main()
{
	double y0,x0,y1,x1,y1_0,a,n,h,f,f1;
	int j,count,flag;
	printf("\nenter the value of x0: ");
	scanf("%1f",&x0);
	printf("\nenter the value of y0: ");
	scanf("%1f",&y0);
	printf("\nenter the value of h: ");
	scanf("%1f",&h);
	printf("\nenter the value of last point: ");
	scanf("%1f",&n);
	for(x1=x0+h,j=1;x1<=n+h;x1=x1+h,j++)
	{
		count=0;
		flag=0;
		f=F(x0,y0);
		y1_0=y0+(h+f);
		printf("\n\n** y%d=%.31f **",j,y1_0);
		do
		{
			count++;
			f=F(x0,y0);
			f1=F(x1,y1_0);
			y1=y0+h/2*(f+f1);
			printf("\n\n** x=%.31f=>y%d_%d=%.31f **",x1,j,count,y1);
			if(fabs(y1-y1_0)<0.00001)
			{
				printf("\n\n\n\n **** y%d=.31f ****\n\n",j,y1);
				flag=1;
			}
			else
			y1_0=y1;
		}while(flag!=1);
		y0=y1;
		}
	}
