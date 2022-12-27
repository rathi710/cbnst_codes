#include<stdio.h>
#include<math.h>
void print(float a[3][4])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
}

void daigonal(float a[3][4])
{
    float ratio;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j != i)
            {
                ratio=a[j][i]/a[i][i];
                for(int k=0;k<4;k++)
                {
                    a[j][k]-=(a[i][k]*ratio);
                }

            }
            printf("Intermediate Matrix : \n");
            printf("\n");
            print(a);
        }
    }
}

int main()
{
    int n;
    printf("Enter Total No Of Terms : ");
    scanf("%d",&n);
    float sx=0,sx2=0,sx3=0,sx4=0,sy=0,sxy=0,sx2y=0,x[n],y[n],a[3][4],a1,b,c;
    printf("Enter Value Of X : ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter Value Of Y : ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }

    for(int i=0;i<n;i++)
    {
        sx+=x[i];
        sy+=y[i];
        sxy+=x[i]*y[i];
        sx2+=x[i]*x[i];
        sx3+=x[i]*x[i]*x[i];
        sx4+=x[i]*x[i]*x[i]*x[i];
        sx2y+=x[i]*x[i]*y[i];
    }

    a[0][0]=sx2;
    a[0][1]=sx;
    a[0][2]=n;
    a[0][3]=sy;
    a[1][0]=sx3;
    a[1][1]=sx2;
    a[1][2]=sx;
    a[1][3]=sxy;
    a[2][0]=sx4;
    a[2][1]=sx3;
    a[2][2]=sx2;
    a[2][3]=sx2y;
    printf("Using Gauss Jordan Method : \n");
    daigonal(a);
    printf("\n");
    a1=a[0][3]/a[0][0];
    b=a[1][3]/a[1][1];
    c=a[2][3]/a[2][2];

    printf("Equation is y = (%0.2f)x^2 + (%0.2f)x + (%0.2f) \n",a1,b,c);
    return 0;

}
