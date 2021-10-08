#include <stdio.h>

int main() {
    int a,r,c,n;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    a=a-1;
    for(r=0;r<=a;r++){
        printf("\n");
        n=1;
        
        for(c=0;c<=r;c++){
            printf("%d\t",n);
            n=n*(r-c)/(c+1);
        }
        
        
        
    }

}
