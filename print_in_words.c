#include<stdio.h>
int main()
{
        int n,a,rev=0,r;
        printf("ENTER THE NUMBER = ");
        scanf("%d",&n);
        while(n>0)
      {  r=n%10;
        rev=rev*10+r;
        n=n/10;
      }
             while(rev>0)   
        {
                a=rev%10;
                if(a==1)
                {
                        printf("ONE\t");
                }
                if(a==2)
                {
                        printf("TWO\t");
                }
                if(a==3)
                {
                    printf("THREE\t");
                }
                if(a==4)
                {
                        printf("FOUR\t");
                }
                if(a==5)
                {
                        printf("FIVE\t");
                }
                if(a==6)
                {
                        printf("SIX\t");
                }
                if(a==7)
                {
                        printf("SEVEN\t");            
                }
                if(a==8)
                {
                        printf("EIGHT\t");
                }
                if(a==9)
                {
                        printf("NINE\t");
                }
                if(a==0)
                {
                        printf("ZERO\t");
                }
                rev=rev/10;
                
        }

                
                return 0;
        }
