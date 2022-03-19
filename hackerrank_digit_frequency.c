#include <stdio.h>

int main()
{
    char str[1000],b[10]={0};
    int i;
    scanf("%[^\n]",str);
    for(i=0;str[i];i++){
        if(str[i]>='0'&&str[i]<='9'){
            b[str[i]-48]++;
        }
    }
    for(i=0;i<=9;i++){
        printf("%d ",b[i]);
    }

    return 0;
}
