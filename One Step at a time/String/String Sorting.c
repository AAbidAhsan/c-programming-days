#include <stdio.h>



int main()
{
    char arr[100];
    char temp;
    int i=0,j=0,n=0;
    scanf("%[^\n]s",arr);
    while(arr[++n]!='\0'){
        
    }
      
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }

    
    printf("%s",arr);

    return 0;
}
