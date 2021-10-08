#include <stdio.h>




int main(){
    int cases,a;
    scanf("%d",&cases);

    while(cases!=0){
        scanf("%d",&a);
        if(a<=10){
            printf("0 %d\n",a);
        }
        else{
            printf("10 %d\n",a-10);
        }
        cases--;

    }
    return 0;
}