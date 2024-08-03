#include<stdio.h>

int main()
{
    float temp;
    printf("enter the temperature : ");
    scanf("%f",&temp);

    if(temp>=0 && temp <= 20){
        printf("It is cold!");
    }
    else if(temp>20){
        printf("It is hot today! ");
    }
    else {
        printf("temperature is in negative, it is very cold!");
    }
    return 0;
}