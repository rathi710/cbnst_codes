#include<stdio.h>
#include<conio.h>

#define S 50

int main()
{
    int n,i;   
    printf("\n Enter the value of number of terms n:");
    scanf("%d",&n); 
    float x[n],y[n],sumX=0,sumY=0,sumXY=0,sumX2=0;
    float a,b; 
    
    printf("\nEnter the values of x:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\nEnter the values of y:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }

 /* Calculating Required Sum */
 for(i=0;i<n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }

 /* Calculating a and b */
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;

 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",a,b);
 getch();
 return(0);
}