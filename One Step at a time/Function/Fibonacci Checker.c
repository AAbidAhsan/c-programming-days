#include <stdio.h>

int main()
{
    int a,b=0,c=1,d;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    while(1){
        if(a==0 || a==1){
        printf("The number %d is a member of fibonacci series",a);
        break;
    }
        d=b+c;
        if(d==a){
            printf("The number %d is a member of fibonacci series",a);
            break;
        }
        if(d>a){
            printf("The number %d is not a member of fibonacci series",a);
            break;
        }
        b=c;
        c=d;
    }
}
