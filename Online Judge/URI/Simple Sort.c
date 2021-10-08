#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b){
        if(a<c){
            printf("%d\n",a);
            if(b<c){
                printf("%d\n%d\n",b,c);
            }
            if(c<b){
                printf("%d\n%d\n",c,b);
            }
        }
        
        if(c<a){
            printf("%d\n%d\n%d\n",c,a,b);
        }
        
    }
    
    if(b<a){
        if(b<c){
            printf("%d\n",b);
            if(a<c){
                printf("%d\n%d\n",a,c);
            }
            if(c<a){
                printf("%d\n%d\n",c,a);
            }
        }
        
        if(c<b){
            printf("%d\n%d\n%d\n",c,b,a);
        }
        
    
    }
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    
    
    
    return 0;
    
}
