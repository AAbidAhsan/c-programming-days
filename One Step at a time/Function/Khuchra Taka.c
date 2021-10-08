#include <stdio.h>

int thousand_taka(int n){
    int a;
    a=n/1000;
    if(a!=0){
        printf("Number of 1000 Taka Note: %d\n",a);
    }
    
    return n%1000;
}

int five_Hundred_taka(int n){
    int a;
    a=n/500;
    if(a!=0){
        printf("Number of 500 Taka Note: %d\n",a);
    }
    
    return n%500;
}
int two_hundred_taka(int n){
    int a;
    a=n/200;
    if(a!=0){
        printf("Number of 200 Taka Note: %d\n",a);
    }
    
    return n%200;
}

int hundred_taka(int n){
    int a;
    a=n/100;
    if(a!=0){
        printf("Number of 100 Taka Note: %d\n",a);
    }
    
    return n%100;
}

int fifty_taka(int n){
    int a;
    a=n/50;
    if(a!=0){
        printf("Number of 50 Taka Note: %d\n",a);
    }
    
    return n%50;
}

int twenty_taka(int n){
    int a;
    a=n/20;
    if(a!=0){
        printf("Number of 20 Taka Note: %d\n",a);
    }
    
    return n%20;
}

int ten_taka(int n){
    int a;
    a=n/10;
    if(a!=0){
        printf("Number of 10 Taka Note: %d\n",a);
    }
    
    return n%10;
}

int five_taka(int n){
    int a;
    a=n/5;
    if(a!=0){
        printf("Number of 5 Taka Note: %d\n",a);
    }
    
    return n%5;
}

int two_taka(int n){
    int a;
    a=n/2;
    if(a!=0){
        printf("Number of 2 Taka Note: %d\n",a);
    }
    
    return n%2;
}
int main()
{
  int a,b;
  printf("Enter Amount of Money: ");
  scanf("%d",&a);
  b=thousand_taka(a);
  b=five_Hundred_taka(b);
  b=two_hundred_taka(b);
  b=hundred_taka(b);
  b=fifty_taka(b);
  b=twenty_taka(b);
  b=ten_taka(b);
  b=five_taka(b);
  b=two_taka(b);
  if(b!=0)
  printf("Number of 1 Taka Note:   %d",b);
  
  
  
}
