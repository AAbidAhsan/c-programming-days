#include <stdio.h>



int main()
{
    float a;
    scanf("%f",&a);
    
    a-=2000.00;
    if(a<=0.00){
        printf("Isento\n");
    }
    else if (a>=0 && a<=1000){
        printf("R$ %.2f\n",a*.08);
    }
    else if (a>=1000.01 && a<=2500){
        a-=1000;
        printf("R$ %.2f\n",a*.18+80);
    }
    else if (a>2500){
        a-=2500;
        printf("R$ %.2f\n",80+270+a*.28);
    }
    
    
    
    
    
    return 0;
    
}