#include <stdio.h>
#include <math.h>

float find(float x){
    return log10(x);
}

int main(){
    float a,b,sum=0,i,h;
    int n;
    int pos=1;
    printf("enter intervals a and b:");
    scanf("%f %f",&a,&b);

    printf("enter no of intervals:");
    scanf("%d",&n);

    h=(b-a)/n;
    sum = find(a)+find(b);

    for(i=a+h; i<b; i=i+h){
        if(pos%2 == 0){
            sum = sum + 2*find(i);
        }
        else sum = sum + 4*find(i);
        pos++;
    }
    sum = (sum*h)/3;
    printf("final answer is: %f",sum);

    return 0;
}