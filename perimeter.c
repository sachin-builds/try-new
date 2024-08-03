#include<stdio.h>
// program to find perimeter of a triangle
int main(){
    float s1,s2,s3;
    printf("enter s1");
    scanf("%f",&s1);
    printf("enter s2");
    scanf("%f",&s2);
    printf("enter s3");
    scanf("%f",&s3);
    
    printf("Perimeter of triangle is : %f ", s1 + s2 + s3 );

    return 0;
}