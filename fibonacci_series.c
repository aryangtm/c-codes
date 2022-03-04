#include<stdio.h>
int main()
{
    int a=0,b=1,r,sum=0;
    printf("ENTER THE RANGE = ");
    scanf("%d",&r);
    printf("%d\t%d",a,b);
    while(r>2)
    {
        sum=a+b;
        a=b;
        b=sum;
        r=r-1;
        printf("\t%d",sum);
        
    }
    return 0;
    
    
    
}
