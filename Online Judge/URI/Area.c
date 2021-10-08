#include <stdio.h>

int main()
{
    double A,B,C,pi;
    pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",.5*A*C,pi*C*C,(A+B)*C/2,B*B,A*B);
    

    return 0;
}
