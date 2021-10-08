#include <stdio.h>



int main()
{
    int a,count=0;
    float b,sum=0;
    for(a=1;a<=6;a++){
        scanf("%f",&b);
        if(b>0){
            count++;
            sum+=b;
        }
        
    }
    
    b=sum/count;
    printf("%d valores positivos\n%.1f\n",count,b);
    
    return 0;
}