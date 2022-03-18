#include<stdio.h>
int main()
{
    int r,c,i,j,sum;
    printf("enter the number of row : ");
    scanf("%d",&r);
    printf("enter the number of coloumn :  ");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of row %d : %d\n",j,sum);
    }
    
    
    
    
    
}

