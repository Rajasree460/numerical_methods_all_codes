
/*simpson's 1/3 rule*/

#include<stdio.h>
#include<math.h>
float f(float); //function declaration
int main()
{
	float up,lo,h,y0,yn,in,z,se=0,so=0,result,y;
	int i;

   //user input
	printf("Enter the upper limit\n");
	scanf("%f",&up);
	printf("Enter the lower limit\n");
	scanf("%f",&lo);
	printf("Enter the interval\n");
	scanf("%f",&in);

  
	h=(up-lo)/in;
	y0=f(lo); //first ordinate
	printf("%f\n",y0);
	yn=f(up);  //last ordinate
	printf("%f\n",yn);
	z=lo+h;
	for(i=1;i<(in);i++)   //loop upto n-1
	{
		y=f(z);
		printf("%f\n",y);
            if(i%2==0)     //even
           {
               se=se+y;
            }
            else if(i%2!=0)   //odd
            {
               so=so+y;
             }
		z=z+h;
	}
	result=(h/3)*((y0+yn)+4*so+2*se);  // calculating final result
	printf("The result of simpson's 1/3 rule is %.5f\n",result);
	return 0;
}
float f(float x)  //function
{
	return (tan(exp(x)));
}

