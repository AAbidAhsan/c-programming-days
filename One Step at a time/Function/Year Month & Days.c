#include <stdio.h>

int year_calculation(int n){
    int a;
    a=n/365;
    printf("Number of Year: %d\n",a);
    return n%365;
}
int month_calculation(int n){
    int a;
    a=n/30;
    printf("Number of Month: %d\n",a);
    return n%30;
}

int main()
{
  int a,b,c;
  printf("Enter Number of Days: ");
  scanf("%d",&a);
  b=year_calculation(a);
  c=month_calculation(b);
  printf("Number of days:   %d",c);
  
  
  
}
