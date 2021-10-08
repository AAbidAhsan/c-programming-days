#include <stdio.h>

int day_calculation(int n){
    int a;
    a=n/86400;
    if(a!=0){
        printf("Number of Days: %d\n",a);
    }
    
    return n%86400;
}
int Hour_calculation(int n){
    int a;
    a=n/3600;
    if(a!=0){
        printf("Number of Hours: %d\n",a);
    }
    return n%3600;
}

int Minute_calculation(int n){
    int a;
    a=n/60;
    if(a!=0){
        printf("Number of Minutes: %d\n",a);
    }
    return n%60;
}

int main()
{
  int a,b,c,d;
  printf("Enter Number of Seconds: ");
  scanf("%d",&a);
  b=day_calculation(a);
  c=Hour_calculation(b);
  d=Minute_calculation(c);
  if(d!=0)
  printf("Number of Seconds:   %d",d);
  
  
  
}
