#include<stdio.h>
int main()
{int x,y;
        printf("ENTER THE VALUE OF x= ");
        scanf("%d",&x);
        printf("ENTER THE VALUE OF y= ");
        scanf("%d",&y);
        if(x==0&&y==0)
        {
                printf("Point lies on origin");
        }
        else if(x>0&&y>0)
        {
                printf("Point lies in First Quadrant");
        }
        else if(x<0&&y>0)
        {
                printf("Point lies in Second Quadrant");
        }
        else if(x<0&&y<0)
        {
                printf("Point lies in Third Quadrant");
        }
        else
        printf("Point lies in Fourth Quadrant");
        
        return 0;
        }
