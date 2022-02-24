#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("ENTER TE SIZE OF ROW : ");
    scanf("%d",&r);
    printf("ENTER THE SIZE OF COLOUMN : ");
    scanf("%d",&c);
    int a[r][c],b[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                b[i][j]=a[i][r-1-i];
                b[i][r-1-i]=a[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
