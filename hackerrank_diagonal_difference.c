#include<stdio.h>
int main()
{
    int r,sum=0,sum1=0,i,j,d;
    scanf("%d",&r);
    int a[r][r];
    for (i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            if(i+j==r-1)
            {
                sum1=sum1+a[i][j];
            }
            
        }
    }
    if(sum>sum1)
        {
            d=sum-sum1;
            printf("%d",d);
        }
        else if(sum1>sum)
        {
            d=sum1-sum;
            printf("%d",d);
        }
        else
        {
            printf("0");
        }
}
