#include <stdio.h>
#include <math.h>

void find(float x,float y){
    printf("absolute error: %lf\n", fabs(x-y));
    printf("relative error: %lf\n", fabs(x-y)/x);
    printf("percenatge error: %lf\n", (fabs(x-y)/x)*100);
}

int main()
{
    double x; printf("enter value:"); scanf("%lf",&x);
    int n; printf("enter what decimal places value to be truncated or roundoff:"); scanf("%d",&n);
    
    //for truncated value
    long long int b = x*pow(10,n);
    double c = (double)b/pow(10,n);
    printf("truncated value: %lf\n",c);
    find(x,c);
    
    //for roundoff
    b = x*pow(10,n+1);
    int t = b%10;
    b = b/(double)10;
    if(t>5) b++;
    double d = (double)b/pow(10,n);
    find(x,d);

    return 0;
}
