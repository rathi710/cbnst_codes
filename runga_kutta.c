#include <stdio.h>
#include <math.h>

float f(float x,float y){
    return (x-y)/(x+y);
}

int main(){
    float x0,y0,x1,y1,h,k;
    printf("enter x0 and y0:");
    scanf("%f %f",&x0,&y0);
    printf("\nenter the step size:");
    scanf("%f",&h);
    printf("enter the x term you want to find y for:");
    scanf("%f",&x1);

    int n = (x1-x0)/h;
    float k1,k2,k3,k4;
    

    for(int i = 0; i < n; i++)
    {
        k1 = h*f(x0,y0);
        k2 = h*f(x0+(h/2.0),y0+(k1/2.0));
        k3 = h*f(x0+(h/2.0),y0+(k2/2.0));
        k4 = h*f(x0+h,y0+k3);
        
        y1 = y0 + (k1 + (2*k2) + (2*k3) + k4)/6.0;
        printf("\n %f",y1);
        y0 = y1;
        x0 = x0+h;
        
    }
    printf("\nValue of y at x = %0.2f is %0.3f",x1, y1);

}