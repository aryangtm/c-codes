#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n],even[n],odd[n];
    int e=0,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
    printf("EVEN ARRAY");
    for(i=0;i<e;i++)
    {
        printf(" %d\t",even[i]);
    }
    printf("\n");
    printf("ODD ARRAY");
    for(i=0;i<o;i++)
    {
        printf(" %d\t",odd[i]);
    }
        return 0;

}

