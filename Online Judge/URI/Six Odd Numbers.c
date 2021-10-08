#include <stdio.h>



int main()
{
    int a,i;
    scanf("%d",&a);
    
    for(i=a;i<=a+11;i+=2){
        if(i%2==0){
            printf("%d\n",i+1);
        }
        else{
            printf("%d\n",i);
        }
    }
    
     return 0;
}