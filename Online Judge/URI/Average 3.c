#include <stdio.h>

int main()
{
    float a,b,c,d,Media,score;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    Media=(2*a+3*b+4*c+d)/10;
    printf("Media: %.1f\n",Media);
    
    if(Media>=7.0){
        printf("Aluno aprovado.\n");
    }
    
    
    if(Media<5.0){
        printf("Aluno reprovado.\n");
    }
    
    if(Media>=5.0 && Media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&score);
        printf("Nota do exame: %.1lf\n",score);
        Media=(Media+score)/2;
        if(Media>=5){
            printf("Aluno aprovado.\n");
        }
        if(Media<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",Media);
    }
    
    return 0;
    
}
