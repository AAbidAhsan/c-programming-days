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
        if(r==a){
            for(c=1;c<=(2*r)-1;c=c+2){
            printf("%d\t\t",(c+1)/2);
        }
        }
        for(c=1;c<=(2*r)-1;c++){
            if(c==1){
                if(r!=a)
                printf("%d",c);
            }
            if(c==2*r-1){
            if(r!=1 && r!=a)
                printf("%d",r);
            }
            else{
                printf("\t");
            }
        }
        
    }
}
