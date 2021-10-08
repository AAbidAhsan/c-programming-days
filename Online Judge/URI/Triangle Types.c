#include <stdio.h>

int main()
{
    double a,b,c,x,y,z;
    scanf("%lf%lf%lf",&a,&b,&c);
    
    if(a>=b){
        if(a>=c){
            x=a;
            if(b>=c){
                y=b;
                z=c;
            }
            if(c>=b){
                y=c;
                z=b;
            }
        }
        
        if(c>=a){
            x=c;
            y=a;
            z=b;
        }
        
    }
    
    if(b>=a){
        if(b>=c){
            x=b;
            if(a>=c){
                y=a;
                z=c;
            }
            if(c>=a){
                y=c;
                z=a;
            }
        }
        
        if(c>=b){
            x=c;
            y=b;
            z=a;
        }
        
    
    }
    

    
    if(x>=y+z){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(x*x==y*y+z*z){
        printf("TRIANGULO RETANGULO\n");
    }
    if(x*x>y*y+z*z){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(x*x<y*y+z*z){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(x==y && y==z){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((x==y && y!=z) || (x!=y && y==z)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    }
    
    
    
    return 0;
    
}