#include <stdio.h>

int main()
{
   int n,i,j,temp,count=0;
   printf("Enter the amount of Numbers: ");
   scanf("%d",&n);
   int arr[n];
   printf("\nEnter the Numbers    ");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   
   for(i=0;i<n;i++){
       if(arr[i]!=9999){
           count=0;
           temp=arr[i];
           for(j=0;j<n;j++){
               if(arr[j]==temp){
                   count++;
                   arr[j]=9999;
               }
           }
           printf("The number of times %d has come is:  %d\n",temp,count);
       }
   }
   
   
}
