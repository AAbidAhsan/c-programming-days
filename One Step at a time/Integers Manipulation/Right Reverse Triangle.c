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
            for(c=1;c<=b;c++){
                printf("%d\t",c);
            }
        }
    }
    
   
    
}
