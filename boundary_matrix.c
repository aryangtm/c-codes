#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("ENTER THE SIZE FOR ROW : ");
    scanf("%d",&r);
    printf("ENTER THE SIZE FOR COLOUMN : ");
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
        for(j=0;j<c;j++)
        {
            if(i==0||i==r-1)
            {
                printf("%d\t",a[i][j]);
            }
            else if(j==0||j==c-1)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
