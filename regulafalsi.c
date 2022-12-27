// reula falsi method
#include <stdio.h>
#include <math.h>

float findValueAt(float x){
    // return x*x*x - 2*x - 5;
    return cos(x)-x*exp(x);
}

float findX(float a,float b)
{
      return (a*findValueAt(b) - b * findValueAt(a)) / (findValueAt(b) - findValueAt(a));
}

int main()
{
    float a,b,x,x2;
    do {
        printf("Enter the value of a and b(starting boundary): ");  //2 & 3 for this one
        scanf("%f %f",&a,&b);
        if(findValueAt(a)*findValueAt(b) > 0)
        {
           printf("Roots are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",a,b);
            break;

        }
    } while(1);

    x = findX(a,b);
    while(1)
    {
        if(findValueAt(x)*findValueAt(a) < 0){
            b = x;
        } 
        else a = x;
        x2 = findX(a,b);

        if(fabs(x2-x)<.00001){ 
          printf("Root=%.4f",x);
          return 0;

        }
        printf("%f\n",x2);
        x=x2; 
    }
    return 0;
}