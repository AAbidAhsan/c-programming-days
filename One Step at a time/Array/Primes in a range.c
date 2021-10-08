#include <stdio.h>






unsigned long long int prime_checker(unsigned long long int n){
    unsigned long long int i=2;
    while(i<n){
        if(n%i==0){
            return 1;
        }
        i++;
    }
    
    
}
       


int main()
{
  unsigned long long int a,x,count=0,start,end;
  printf("Enter the start of the range:     ");
  scanf("%llu", &start);
  printf("Enter the end of the range:     ");
  scanf("%llu", &end);
  
  for(a=start;a<=end;a++){
      x=prime_checker(a);
  if(x!=1){
      count++;
      
  }
  
  }
  
  printf("The number of Prime Numbers between %llu and %llu is: %llu",start,end,count);
  
  
  
  
}
