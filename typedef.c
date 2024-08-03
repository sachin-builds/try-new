#include<stdio.h>

typedef struct COMPUTERSCIENCESTUDENT{
        char name[100];
        int roll;
        float cgpa;
    }cse;

int main(){
    cse s1;
    scanf("%s",&s1.name);
    scanf("%d",&s1.roll);
    scanf("%f",&s1.cgpa);
    printf("Name is : %s",s1.name);
    printf("Roll no is : %d",s1.roll);
    printf("CGPA is : %f",s1.cgpa);


    return 0;
}