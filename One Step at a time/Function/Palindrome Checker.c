#include <stdio.h>





int reverse_number(int n){
    int m;
    while(n>=10)
    {
        m=m*10+n%10;
        n=n/10;
    }
    
    return m*10+n;
}




void Palindrome_Checker(int n, int m){
    if(n==m){
        printf("The Number is a palindrome");
    }
    else{
        printf("The Number is not a palindrome");
    }
}


int main()
{
  int a,b,c;
  printf("Enter a Number:       ");
  scanf("%d",&a);
  b=reverse_number(a);
  Palindrome_Checker(a,b);
  
  
  
  
  
  
}
