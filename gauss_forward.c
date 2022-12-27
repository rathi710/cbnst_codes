#include<stdio.h>

void solve(float *x,int n, float y[n][n], float value, float p,int ind)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%.5f    ",x[i]);
        for(int j=0;j<n-i;j++)
        {
            printf("%0.5f     ",y[i][j]);
        }
        printf("\n");
    }
        

    float ans=y[ind][0] + p*y[ind][1] + p*(p-1)*y[ind-1][2]/2 + p*(p-1)*(p+1)*y[ind-1][3]/6 + p*(p-1)*(p-2)*(p+1)*y[ind-2][4]/24;
    printf("\nans=  %0.5f",ans);
}

int main(){
    int n;
    scanf("%d",&n);
    float x[n];
    float y[n][n];

    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i][0]);
    }
    float value;
    scanf("%f",&value);

    float p;
    int ind;
    for(int i=1;i<n;i++)
    {
        if(value<x[i])
        {
            p=(value-x[i-1])/(x[1]-x[0]);
            ind=i-1;
            break;
        }
    }
    printf("p   =   %0.3f\n\n",p,ind);
    solve(x,n,y,value,p,ind);

}