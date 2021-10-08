#include <stdio.h>



int main()
{
    float i,j;
    while(1){
        scanf("%f",&i);
        if(i<0 || i>10){
            printf("nota invalida\n");
            continue;
        }
        else{
            while(1){
                scanf("%f",&j);
            if(j<0 || j>10){
            printf("nota invalida\n");
            continue;
            }
            else{
                printf("media = %.2f\n",(i+j)/2);
                break;
            }
            }
        }
        break;
        
        
        
    }
    return 0;
}
