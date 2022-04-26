#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k,t,n,i,j,max=0,min=0;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        max=a[0];
        min=a[0];
        for(k=0;k<n;k++)
        {
            if(max<a[k])
            {
                max=a[k];
            }
            if(min>a[k])
            {
                min=a[k];
            }
        }
        b[i]=abs(max-min);
    }
    for(i=0;i<t;i++)
    {
        printf("%d",b[i]);
    }
    
    
    
}
