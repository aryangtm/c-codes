#include<stdio.h>
int main()
{
    int r,c,i,j,z=0;
    printf("enter the size of row : ");
    scanf("%d",&r);
    printf("enter the ize of coloumn : ");
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
            if(i>j&&a[i][j]!=0)
            {
                z++;
                break;
            }
            if(i<=j&&a[i][j]==0)
            {
                z++;
                break;
            }
        }
    }
    if(z==0)
    {
        printf("UPPER TRIAGULAR MATRIX");
    }
    else
    {
        printf("NOT UPPER TRiANGULAR MATRIX");
    }
}
