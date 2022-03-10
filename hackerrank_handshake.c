#include<stdio.h>
int main()
{
    int i,t,n,sum,j;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=1;j<=n-1;j++)
        {
            sum=sum+j;
        }
        a[i]=sum;
        
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
}
