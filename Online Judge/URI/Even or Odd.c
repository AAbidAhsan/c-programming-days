#include <stdio.h>



int main()
{
    int a,i,b;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        if(b==0){
            printf("NULL\n");
        }
        else{
            if(b%2==0){
            printf("EVEN ");
        }
        if(b%2!=0){
            printf("ODD ");
        }
        
        if(b>0){
            printf("POSITIVE\n");
        }
        if(b<0){
            printf("NEGATIVE\n");
        }
        }
    }
    
    
    
     return 0;
}