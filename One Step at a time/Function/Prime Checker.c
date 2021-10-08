#include <stdio.h>






int prime_checker(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return 1;
        }
        i++;
    }
    
    
}
       


int main()
{
  int a,x;
  printf("Enter a number:     ");
  scanf("%d", &a);
  x=prime_checker(a);
  if(x!=1){
      printf("The Number is a prime");
      
  }
  else{
      printf("The Number is not a prime");
  }
  
  
  
}
