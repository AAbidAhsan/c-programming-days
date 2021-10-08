#include <stdio.h>



int main()
{
    int i,j;
    while(1){
        scanf("%d%d",&i,&j);
        if(i==j){
            break;
        }
        else{
            if(i>j){
                printf("Decrescente\n");
            }
            if(i<j){
                printf("Crescente\n");
            }
        }
        
    }
    return 0;
}
