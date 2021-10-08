#include <stdio.h>

int main()
{
    int i,j,k,n,m,sum;
    scanf("%d",&i);
    for(n=0;n<i;n++){
        sum=0;
        scanf("%d%d",&j,&k);
        if(j<=k){
            for(m=j+1;m<k;m++){
            if(m%2!=0){
                sum+=m;
               
            }
          }
        }
        
        else{
            for(m=k+1;m<j;m++){
            if(m%2!=0){
                sum+=m;
               
            }
        }
        
        }
        printf("%d\n",sum);
    }

    return 0;
}
