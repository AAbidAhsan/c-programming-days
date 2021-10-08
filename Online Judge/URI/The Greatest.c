#include <stdio.h>

int main()
{
    int A,B,C,max;
    scanf("%d%d%d",&A,&B,&C);
    max=(A+B+abs(A-B))/2;
    max=(max+C+abs(max-C))/2;
    printf("%d eh o maior\n",max);
    

    return 0;
}
