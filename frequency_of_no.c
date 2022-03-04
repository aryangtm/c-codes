#include<stdio.h>
int main()
{
        int n,k=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,a;
        printf("ENTER THE NUMBER = ");
        scanf("%d",&n);
        while(n>0)
        {
                a=n%10;
                if(a==1)
                {
                        k++;
                }
                if(a==2)
                {
                        b++;
                }
                if(a==3)
                {
                    c++;    
                }
                if(a==4)
                {
                        d++;
                }
                if(a==5)
                {
                        e++;
                }
                if(a==6)
                {
                        f++;
                }
                if(a==7)
                {
                        g++;
                }
                if(a==8)
                {
                        h++;
                }
                if(a==9)
                {
                        i++;
                }
                if(a==0)
                {
                        j++;
                }
                n=n/10;
                
        }
                printf("ENTER THE NO OF ONE = %d\n",k);
                printf("ENTER THE NO OF TWO = %d\n",b);
                printf("ENTER THE NO OF THREE = %d\n",c);
                printf("ENTER THE NO OF FOUR = %d\n",d);
                printf("ENTER THE NO OF FIVE = %d\n",e);
                printf("ENTER THE NO OF SIX = %d\n",f);
                printf("ENTER THE NO OF SEVEN = %d\n",g);
                printf("ENTER THE NO OF EIGHT = %d\n",h);
                printf("ENTER THE NO OF NINE = %d\n",i);
                printf("ENTER THE NO OF ZERO = %d",j);
                
                return 0;
        }
