#include <stdio.h>

void concatanate(char *a,char *b){
    int i=0,j=0,n;
    while(a[++i]!='\0'){
        
    }
    i--;
    while(b[++j]!='\0'){
        
    }
    j--;
    a[i+1]=' ';
    for(n=0;n<=j;n++){
        if(b[n]!='\0'){
            a[i+2]=b[n];
            i++;
        }
    }
}

int main()
{
    char ch[100],ch1[100];
    int i;
    printf("\nHow Many Strings do you want to concatanate? ");
    scanf("%d",&i);
    printf("\nEnter a string ");
    scanf(" %[^\n]s",ch);
    while(--i){
        printf("\nEnter another string: ");
        scanf(" %[^\n]s",ch1);
        
        concatanate(ch,ch1);
        
    }
    printf("\n%s ",ch);
    

    return 0;
}
