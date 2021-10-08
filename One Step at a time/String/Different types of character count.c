#include <stdio.h>



int main()
{
    char ch[100];
    int cap_alpha=0,small_alpha=0,number=0,special=0,i=0;
    scanf("%[^\n]s",ch);
    while(ch[i]!='\0'){
        if(ch[i]>=48 && ch[i]<=57){
            number++;
        }
        else if(ch[i]>=65 && ch[i]<=90){
            cap_alpha++;
        }
        else if(ch[i]>=97 && ch[i]<=122){
            small_alpha++;
        }
        else{
            special++;
        }
        i++;
    }
    
    printf("Number of Capital Alphabets -%d\nNumber of Small Alphabets -%d\nNumber of Numeric Digits -%d\nNumber of Special Characters -%d\n",cap_alpha,small_alpha,number,special);
    

    return 0;
}
