#include <stdio.h>



int main()
{
    float i,j;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%f%f",&i,&j);
        if(j==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",i/j);
        }
        
        
        
    }
    return 0;
}
