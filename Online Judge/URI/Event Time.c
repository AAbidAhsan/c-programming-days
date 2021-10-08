#include <stdio.h>



int main()
{
    int a,b,c,d,x;
    char faltu[10];
    scanf("%s",faltu);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%s",faltu);
    scanf("%d",&c);
    scanf("%s",faltu);
    scanf("%d",&d);
    x=a*86400+b*3600+c*60+d;
    
    
    scanf("%s",faltu);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%s",faltu);
    scanf("%d",&c);
    scanf("%s",faltu);
    scanf("%d",&d);
    x=(a*86400+b*3600+c*60+d)-x;
    
    printf("%d dia(s)\n",x/86400);
    x%=86400;
    printf("%d hora(s)\n",x/3600);
    x%=3600;
    printf("%d minuto(s)\n",x/60);
    x%=60;
    printf("%d segundo(s)\n",x);
    
    
    
    
    return 0;
    
}