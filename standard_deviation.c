#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0;
    float sum=0,SD,avg;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);        
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=(float)s/n;
    for(i=0;i<n;i++)
    {
        sum=sum+pow(avg-a[i],2);
    }
    SD=sqrt(sum/n);
    printf("STANDARD DEVIATION OF YOUR ARRAY IS %f",SD);
    return 0;
}
