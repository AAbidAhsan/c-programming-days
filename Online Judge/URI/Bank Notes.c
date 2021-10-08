#include <stdio.h>

int main()
{
    int x,temp;
    scanf("%d",&x);
    printf("%d\n",x);
    
    
    temp=x%100;
    x=x/100;
    printf("%d nota(s) de R$ 100,00\n",x);
    
    x=temp/50;
    temp=temp%50;
    printf("%d nota(s) de R$ 50,00\n",x);
    
    x=temp/20;
    temp=temp%20;
    printf("%d nota(s) de R$ 20,00\n",x);
    
    x=temp/10;
    temp=temp%10;
    printf("%d nota(s) de R$ 10,00\n",x);
    
    x=temp/5;
    temp=temp%5;
    printf("%d nota(s) de R$ 5,00\n",x);
    
    x=temp/2;
    temp=temp%2;
    printf("%d nota(s) de R$ 2,00\n",x);
    
    printf("%d nota(s) de R$ 1,00\n",temp);

    return 0;
}
