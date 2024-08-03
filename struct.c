#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    struct student s2,s3;
    s1.roll = 1;
    s1.cgpa = 8.2 ; 
    // s1.name = "Sachin";
    strcpy(s1.name , "Sachin");

    s2.roll = 2;
    s2.cgpa = 7.5;
    strcpy(s2.name, "sahil");

    s3.roll = 3;
    s3.cgpa = 9.1;
    strcpy(s3.name, "ravi");


    printf("student name : %s\n",s1.name);
    printf("student roll : %d\n",s1.roll);
    printf("student cgpa : %f\n",s1.cgpa);
    printf("student name : %s\n",s2.name);
    printf("student roll : %d\n",s2.roll);
    printf("student cgpa : %f\n",s2.cgpa);
    printf("student name : %s\n",s3.name);
    printf("student roll : %d\n",s3.roll);
    printf("student cgpa : %f\n",s3.cgpa);



    return 0;
}