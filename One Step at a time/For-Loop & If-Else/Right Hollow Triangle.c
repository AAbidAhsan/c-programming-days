#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a Positive number:\n");
    scanf("%d",&a);
    if(a<=0){
        printf("Invalid Number");
    }
    else{
        for(b=1;b<=a;b++){
            printf("\n");
            if(b==1){
                printf("%d",b);
            }
            else if(b==a){
                for(c=1;c<=b;c++){
                    printf("%d\t",c);
                }
            }
            else{
            for(c=1;c<=b;c++){
                if(c==1){
                    printf("%d",c);
                }
                else if(c==b){
                    printf("\t%d",b);
                }
                else{
                printf("\t");
                    
                }
            }
        }
    }
    
   
    
}
}
