#include <stdio.h>
#include <math.h>

float f(float x,float y){
    return (x*x+x*y+2);
}

int main(){
    float x0,y0,x1,y1,h;
    printf("enter x0 and y0:");
    scanf("%f %f",&x0,&y0);
    printf("\nenter the step size:");
    scanf("%f",&h);
    printf("enter the x term you want to find:");
    scanf("%f",&x1);

    // int n = (x1-x0)/h;
    for(float i = x0; i < x1; i+=h){
        y1 = y0 + h*f(x0,y0);
        printf("\n %f  %f",i+h,y1);
        // x0 = x0 + h;
        y0 = y1;
    }
    // printf("\n %f",y0);
}