#include<stdio.h>
int main()
{
    int n,i;
    long int sum=0;
    scanf("%d",&n);
    long int a[n];
    for (i=0;i<=n-1;i++)
    {
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld",sum);
}
