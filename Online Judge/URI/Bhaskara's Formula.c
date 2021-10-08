#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,x;
    scanf("%lf%lf%lf",&A,&B,&C);
    x=B*B-4*A*C;
    if(x<0 || A==0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\nR2 = %.5lf\n",(-B+sqrt(x))/(2*A),(-B-sqrt(x))/(2*A));
    }
    
}