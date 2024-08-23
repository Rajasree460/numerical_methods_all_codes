/*eulars' modified theorem*/
#include<stdio.h>
#include<math.h>
#include<string.h>
float fun(float,float);
int main()
 {
 int i,j,c;
 float x[100],y[100],h,m[100],m1,m2,a,s[100],w;
 printf(“\n C program for Modified Euler Method \n\n”);
 printf(“ Enter the initial value of x:”);
 scanf(“%f”,&x[0]);
 printf(“\n Enter the value of increment h:”);
 scanf(“%f”,&h);
 printf(“\n Enter the final value of x:”);
 scanf(“%f”,&a);
 printf(“\n Enter the initial value of the variable y :”);
 scanf(“%f”,&y[0]);
 S[0]=y[0];
 for(int i=1;x[i-1]<a;i++)
 {
 float W=100.0;
 float X[i]= x[i-1]+h;
 float M[i]=fun(x[i-1],y[i-1]);
 float C=0;
 while(w>0.0001)
 {
 float M1=fun(x[i],s[c]);
 float M2=(m[i]+m1)/2;
 float S[c+1]=y[i-1]+m2*h;
 float W=s[c]-s[c+1];
 float W=fabs(w);
 float C=c+1;
 }
 float Y[i]=s[c];
 }
 printf(“\n\n The respective values of x && y are\n x \t y\n\n”);
 for(int j=0;j<i;j++)
 {
 printf(“ %f\t%f”,x[j],y[j]);
 printf(“\n”);
 }
 }
float fun(float a,float b)
 {
 float c;
 float C=a*a+b;
 return c;
 }
