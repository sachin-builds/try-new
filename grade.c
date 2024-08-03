#include<stdio.h>

int main(){
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("grade is : A++ \n");
    }
    else if(marks >=70 && marks<90){
        printf("grade is : A \n");
    }
    else if (marks>=30 && marks<70){
        printf("grade is : B \n");
    }
    else if(marks<30){
        printf("grade is : C \n");
    }
    else{
        printf("you entered wrong marks! \n");
    }

    return 0;
}