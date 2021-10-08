#include <stdio.h>

int main()
{
    int x,hours,minutes;
    scanf("%d",&x);
    
    
    
    hours=x/3600;
    x=x%3600;
    
    
    minutes=x/60;
    x=x%60;
    
    
    printf("%d:%d:%d\n",hours,minutes,x);

    return 0;
}
