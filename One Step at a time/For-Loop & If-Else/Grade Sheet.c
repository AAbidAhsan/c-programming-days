#include <stdio.h>

int main() {
    int a;
    printf("Enter the mark:\n");
    scanf("%d",&a);
    
    if(a>=0 && a<40){
        printf("Letter Grade F\nGrade Point 0.00\n");
    }
    else if(a>=40 && a<45){
        printf("Letter Grade D\nGrade Point 2.00\n");
    }
    else if(a>=45 && a<50){
        printf("Letter Grade C\nGrade Point 2.25\n");
    }
    else if(a>=50 && a<55){
        printf("Letter Grade C+\nGrade Point 2.50\n");
    }
    else if(a>=55 && a<60){
        printf("Letter Grade B-\nGrade Point 2.75\n");
    }
    else if(a>=60 && a<65){
        printf("Letter Grade B\nGrade Point 3.00\n");
    }
    else if(a>=65 && a<70){
        printf("Letter Grade B+\nGrade Point 3.25\n");
    }
    else if(a>=70 && a<75){
        printf("Letter Grade A-\nGrade Point 3.50\n");
    }
    else if(a>=75 && a<80){
        printf("Letter Grade A\nGrade Point 3.75\n");
    }
    else if(a>=80 && a<=100){
        printf("Letter Grade A+\nGrade Point 4.00\n");
    }
    else{
        printf("Wrong Input");
    }
    
    
    
    
}
