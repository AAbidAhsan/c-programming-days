#include <stdio.h>



int main()
{
    int i,j;
    while(1){
        scanf("%d%d",&i,&j);
        if(i==0 || j==0){
            break;
        }
        if(i>0 && j>0){
            printf("primeiro\n");
        }
        if(i>0 && j<0){
            printf("quarto\n");
        }
        if(i<0 && j<0){
            printf("terceiro\n");
        }
        if(i<0 && j>0){
            printf("segundo\n");
        }
        
        
        
    }
    return 0;
}
