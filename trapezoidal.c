#include <stdio.h>
#include <math.h>

float find(float x){
    return log(x);
}

int main(){
    float a,b,sum=0,i,h;
    int n;
    printf("enter intervals a and b:");
    scanf("%f %f",&a,&b);

    printf("enter no of intervals:");
    scanf("%d",&n);

    h=(b-a)/n;
    sum = find(a)+find(b);

    for(i=a+h; i<b; i=i+h){
        sum = sum + 2*find(i);
    }
    sum = (sum*h)/2;
    printf("final answer is: %f",sum);

    return 0;
}