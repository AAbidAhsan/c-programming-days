#include <stdio.h>

int main() {
    int a;
    printf("Enter a Positive number:\n");
    scanf("%d",&a);
    if(a<0){
        printf("Invalid Number");
    }
    else{
        printf("The numbers is %d\nThe sum of all numbers upto %d is %d\n",a,a,a*(a+1)/2);
    }
    
   
    
}
