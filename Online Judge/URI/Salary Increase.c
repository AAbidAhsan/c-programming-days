#include <stdio.h>



int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0.00 && a<=400.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n",a*1.15,a*.15);
    }
    if(a>=400.01 && a<=800.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n",a*1.12,a*.12);
    }
    if(a>=800.01 && a<=1200.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n",a*1.10,a*.10);
    }
    if(a>=1200.01 && a<=2000.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n",a*1.07,a*.07);
    }
    if(a>2000.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n",a*1.04,a*.04);
    }
    
    
    
    
    
    return 0;
    
}