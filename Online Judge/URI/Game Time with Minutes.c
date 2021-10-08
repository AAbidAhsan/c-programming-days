#include <stdio.h>



int main()
{
    int a,b,c,d,x,y,p,q;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a*60+b;
    y=c*60+d;
    if(x<y){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(y-x)/60,(y-x)%60);
    }
    if(x>=y){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(y+1440-x)/60,(y+1440-x)%60);
    }
    
    
    
    
    
    return 0;
    
}