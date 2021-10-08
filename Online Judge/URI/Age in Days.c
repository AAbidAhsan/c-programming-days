#include <stdio.h>

int main()
{
    int x,years,months;
    scanf("%d",&x);
    
    
    
    years=x/365;
    x=x%365;
    
    
    months=x/30;
    x=x%30;
    
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,x);

    return 0;
}

