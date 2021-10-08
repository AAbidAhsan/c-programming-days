#include <stdio.h>



int Celcius_to_farenheit(int c){
    return ((9*c)/5)+32;
}



int main()
{
  int a;
  printf("Enter Temperature in Celcius:     ");
  scanf("%d", &a);
  printf("Temperature in Farenheit is   :  %d degree",Celcius_to_farenheit(a));
  
  
  
  
  
}
