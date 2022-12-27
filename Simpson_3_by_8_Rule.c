//C Program to Implement Simpson's 3/8 Rule

#include<stdio.h>

float findValueAt(float x)
{
    return 1/(1+x*x);
}
int main()
{
    int n;
    float i,a,b,sum=0,h;
    //The initial Position (0) is treated as Even position
    int pos=1;
    printf("Enter Value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("Enter no. of Intervals\n");
    scanf("%d",&n);


    h=(b-a)/n;
    sum = findValueAt(a) +findValueAt(b);
 
    for(i=a+h;i<b;i=i+h)
    {
       if(pos %3 ==0)
         sum = sum + 2*findValueAt(i);
       else
         sum = sum + 3*findValueAt(i); 
       pos++;   
    }
    sum = (3*h)/8 * sum;
    //Print the Output
    printf("\nValue of The integral  = %f",sum);    
    
}