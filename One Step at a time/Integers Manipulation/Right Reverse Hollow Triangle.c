#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a Positive number:\n");
    scanf("%d",&a);
    if(a<=0){
        printf("Invalid Number");
    }
    else{
        for(b=a;b>=1;b--){
            printf("\n");
            if(b==a){
                for(c=1;c<=b;c++){
                    printf("%d\t",c);
                }
            }
            else if(b==1){
                printf("%d",a);
            }
            else{
                for(c=1;c<=b;c++){
                    if(c==1){
                        printf("%d",a+1-b);
                    }
                    else if(c==b){
                        printf("\t%d",a);
                }
                    else{
                        printf("\t");
                    }
                
            }
        }
    }
    }
   
    
}
