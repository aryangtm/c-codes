#include<stdio.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("2\n");
        }
        else if(n>1)
        {
            n=n+1;
            printf("%d\n",n);
        }
        n=0;
    }
}
