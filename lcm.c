#include<stdio.h>
int main()
{
    int n,n1,m,z;
    printf("ENTER NUMBER 1 = ");
    scanf("%d",&n);
    printf("ENTER NUMBER 2 = ");
    scanf("%d",&n1);
    m=n>n1?n:n1;
    while(1)
    {
        if(m%n==0&&m%n1==0)
        {
            z=m;
            break;
        }
        m++;
    }
    printf("%d",z);
    
    return 0;
}
