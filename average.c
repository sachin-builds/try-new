#include<stdio.h>
int main(){
    float num1,num2,num3,avg;
    printf("enter first number: ");
    scanf("%f",&num1);
    printf("enter second number: ");
    scanf("%f",&num2);
    printf("enter third number: ");
    scanf("%f",&num3);
    avg=(num1+num2+num3)/3;
    printf("average is : %f",avg);
    return 0;
}