#include <stdio.h>

int main()
{
    int n[100],i,max=0,position;
    for(i=0;i<100;i++){
        scanf("%d",&n[i]);
        if(max<n[i]){
            max=n[i];
            position=i+1;
        }
    }
    printf("%d\n%d\n",max,position);
    
}
