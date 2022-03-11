#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
        
            for(int k=1;k<=n;k++)
            {
                if(i==k||i==2*n-k ||j==k||j==2*n-k)
                {
                    printf("%d ",n-k+1);
                    break;
                }
            }
    

        }
       printf("\n");
    }

   
}
