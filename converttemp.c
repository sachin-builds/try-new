#include<stdio.h>

float converttemp(float celsius);

int main(){
    printf("far is : %f" , converttemp(37));
    return 0;
}

float converttemp(float celsius){
    float far = celsius * 9.0/5.0 +32 ;
    return far;
}