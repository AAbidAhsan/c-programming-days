#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The numbers are \na=%d\nb=%d\n",a,b);
    
    if(a>b){
        for(c=b;c>=1;c--){
            if(a%c==0 && b%c==0){
                printf("The GCD of the two numbers is : %d\n",c);
                printf("The LCM of the two numbers is : %d\n",a*b/c);
                
                
                break;
            }
        }
    }
    if(a<b){
        for(c=a;c>=1;c--){
            if(a%c==0 && b%c==0){
                printf("The GCD of the two numbers is : %d\n",c);
                printf("The LCM of the two numbers is : %d\n",a*b/c);
                
                
                break;
            }
        }
    }
    else{
        printf("The GCD and LCM of the two numbers is : %d\n",a);
    }
    
    
    
    
    
    
    
    
}
