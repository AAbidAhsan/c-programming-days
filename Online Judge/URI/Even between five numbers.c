#include <stdio.h>



int main()
{
    int a,b,count=0;
    
    for(a=1;a<=5;a++){
        scanf("%d",&b);
        if(b%2==0){
            count++;
            
        }
        
    }
    
    
    printf("%d valores pares\n",count);
    
    return 0;
}