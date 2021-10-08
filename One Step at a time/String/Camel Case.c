#include <stdio.h>

int main()
{
    char ch[100];
    scanf("%[^\n]s",ch);
    if(ch[0]>=97 && ch[0]<=122){
        ch[0]-=32;
    }
    int i=2;
    while(ch[i]!='\0'){
        if(ch[i]==' ' && ch[i+1]>=97 && ch[i+1]<=122){
            ch[i+1]-=32;
        }
        i++;
    }
    
    printf("%s",ch);
    

    return 0;
}
