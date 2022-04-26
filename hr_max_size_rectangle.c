#include<stdio.h>
int main()
{
    int temp,max1,max,t,n,i,j,k,area;
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
        max=0;
        max1=0;
        temp=0;
        for(k=0;k<n;k++)
        {
            if(max<a[k])
            {
                temp=max;
                max=a[k];
                max1=temp;
            }
            else if(max1<a[k])
            {
                max1=a[k];
            }
        }
        area=max*max1;
        b[i]=area;
        area=0;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",b[i]);
    }
}
