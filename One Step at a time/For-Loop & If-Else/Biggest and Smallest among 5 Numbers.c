#include <stdio.h>

int main() {
    int a,b,c,d,e;
    printf("Enter 5 Numbers:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("The numbers are \na=%d\nb=%d\nc=%d\nd=%d\ne=%d\n",a,b,c,d,e);
    if(a>b && a>c && a>d && a>e){
        printf("The biggest number is %d",a);
    }
    if(b>a && b>c && b>d && b>e){
        printf("The biggest number is %d",b);
    }
    if(c>a && c>b && c>d && c>e){
        printf("The biggest number is %d",c);
    }
    if(d>a && d>b && d>c && d>e){
        printf("The biggest number is %d",d);
    }
    if(e>a && e>b && e>c && e>d){
        printf("The biggest number is %d",e);
    }
    printf("\n");
    if(a<b && a<c && a<d && a<e){
        printf("The smallest number is %d",a);
    }
    if(b<a && b<c && b<d && b<e){
        printf("The smallest number is %d",b);
    }
    if(c<a && c<b && c<d && c<e){
        printf("The smallest number is %d",c);
    }
    if(d<a && d<b && d<c && d<e){
        printf("The smallest number is %d",d);
    }
    if(e<a && e<b && e<c && e<d){
        printf("The smallest number is %d",e);
    }
    
    
    
}

