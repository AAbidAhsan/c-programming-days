#include <stdio.h>



int main()
{
    int a,count=0,b,i;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        if(b>=10 && b<=20){
            count++;
        }
    }
    
    printf("%d in\n%d out\n",count,a-count);
    
     return 0;
}