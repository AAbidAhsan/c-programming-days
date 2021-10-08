#include <stdio.h>



int number_array[10];
int i=0;


int number_to_array(int n){
    while(n>=10){
    number_array[i]=n%10;
    i++;
    return number_to_array(n/10);
    }
    number_array[i]=n;
    i++;
}




int main()
{
  int a,sum=0;
  printf("Enter a number:     ");
  scanf("%d", &a);
  number_to_array(a);
  while(i--){
     sum=sum+number_array[i]*number_array[i]*number_array[i];
  }
  if(sum==a){
      printf("It is an armstrong number");
  }
  else{
      printf("It is not an armstrong number");
  }
  
  
  
  
}
