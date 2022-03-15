#include<stdio.h>
int main()
{
    int z=0,nz=0,i,j,r,c;
    printf("enter the size of row : ");
    scanf("%d",&r);
    printf("enter the size of colum : ");
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
            if(a[i][j]==0)
            {
                z++;
            }
            else if(a[i][j]!=0)
            {
                nz++;
            }
        }
    }
    if(z>nz)
    {
        printf("SPARSE MATRIX");
    }
    else if(nz>z)
    {
        printf("NOT SPARSE MATRIX");
    }
}
