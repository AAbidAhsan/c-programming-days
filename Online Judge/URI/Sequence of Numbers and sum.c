#include <stdio.h>



int main()
{
    int i,j,k,n,m,sum;
    while(1){
        sum=0;
        scanf("%d%d",&i,&j);
        if(i<=0 || j<=0){
            break;
        }
        else{
            if(i<=j){
            for(k=i;k<=j;k++){
                printf("%d ",k);
                sum+=k;
            }
        }
        if(i>j){
            for(k=j;k<=i;k++){
                printf("%d ",k);
                sum+=k;
            }
        }
        }
        
        printf("Sum=%d\n",sum);
        
    }
    return 0;
}
