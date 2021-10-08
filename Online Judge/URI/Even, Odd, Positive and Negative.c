#include <stdio.h>



int main()
{
    int a,b,count_even=0,count_odd=0,count_positive=0,count_negative=0;
    
    for(a=1;a<=5;a++){
        scanf("%d",&b);
        if(b%2==0){
            count_even++;
            
        }
        if(b%2!=0){
            count_odd++;
            
        }
        if(b>0){
            count_positive++;
            
        }
        if(b<0){
            count_negative++;
            
        }
        
    }
    
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count_even,count_odd,count_positive,count_negative);
    
    return 0;
}