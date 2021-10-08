#include <stdio.h>

int main() {
    int a,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    for(r=1;r<=a;r++){
        printf("\n");
        for(c=1;c<=a-r;c++){
            printf("\t");
        }
        for(c=1;c<=(2*r)-1;c++){
            if(c<=r){
            printf("%d\t",r+c-1);
            }
            else{
                printf("x\t");
            }
        }
        
    }
