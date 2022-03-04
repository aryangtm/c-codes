#include<stdio.h>
int main()
{
    int x,f=0,i=1;
    printf("ENTER THE NUMBER = ");
    scanf("%d",&x);
    while(i<x)
    {
        if(x%i==0)
        {
            f=f+i;
        }
        i++;
    }
    if (x==f)
    {
        printf("PERFECT NUMBER");
    }
    else
    {
        printf("NOT PERFECT NUMBER");
    }
    
    return 0;
    
}
