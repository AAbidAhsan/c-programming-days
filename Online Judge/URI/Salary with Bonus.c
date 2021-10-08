#include <stdio.h>

int main()
{
    double a,b;
    char c[20];
    scanf("%s",c);
    scanf("%lf%lf",&a,&b);
    
    printf("TOTAL = R$ %.2lf\n", a+b*.15);
    return 0;
}
