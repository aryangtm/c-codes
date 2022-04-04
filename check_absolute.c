#include<stdio.h>
int main()
{
        
        int x;
        printf("ENTER THE NUMBER= ");
        scanf("%d",&x);
        if(x<0)
        {
                x=x*-1;
                printf("%d",x);
        }
        else
        {
                printf("%d",x);
        }
        
        return 0;
}
