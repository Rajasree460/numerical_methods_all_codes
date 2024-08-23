/*Trapizoidal rule*/

#include<stdio.h>
#include<math.h>
float f(float); //Function delaration
int main()
{
	float up,lo,h,y0,yn,in,z,s=0,result,y;    //Variable delaration
	int i;
	
	//User input
	
	printf("Enter the upper limit\n");
	scanf("%f",&up);
	printf("Enter the lower limit\n");
	scanf("%f",&lo);
	printf("Enter the interval\n");
	scanf("%f",&in);
	h=(up-lo)/in;
	y0=f(lo);   //First ordinate
	printf("%f\n",y0);
	yn=f(up);   //Second ordinate
	printf("%f\n",yn);
	z=lo+h;
	for(i=1;i<(in);i++)   //Loop upto n-1
	{
		y=f(z);
		printf("%f\n",y);
		s=s+y;
		z=z+h;
	}
	result=(h/2)*((y0+yn)+2*s);   //Calculating final result
	printf("The result of trapizoidal rule is %.5f\n",result);
	return 0;
}
float f(float x)  //Function
{
	return (tan(exp(x)));
}

