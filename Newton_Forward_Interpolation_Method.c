//Newton Forward Interploation Method
#include<stdio.h>
#include<math.h>

int main()
{
    float x,p1,p,y;
    int i,j,n,fact;
    printf("Enter no. of terms\n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter Values of X\n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][0]);
    printf("Enter Values of Y\n");
    for(i=0;i<n;i++)
          scanf("%f",&a[i][1]); 
    printf("Enter value of x for which you want y\n");
    scanf("%f",&x);

    //Find the Difference Table    
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
            a[i][j] = a[i+1][j-1]-a[i][j-1];
    }

    //Print the Difference Table
    printf("The Difference Table is as follows:\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<=n-i;j++)
        printf("%f ",a[i][j]);
     printf("\n");
    }
    
    //find p  --->  x=x0+p*h => p = (x-x0)/h
    p= (x - a[0][0])/(a[1][0]-a[0][0]);
    //Initial y, p1, k
    y=a[0][1]; 
    p1=p;
    fact=1;
    for(i=2;i<=n;i++)
    {
        y=y+(p1*a[0][i])/fact;
        //Update k, u1
        fact=fact*i; 
        p1=p1*(p-(i-1));
    }
    printf("\n\nValue at X=%g is = %f", x,y);


}