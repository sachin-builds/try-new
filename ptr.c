#include<stdio.h>

int main(){
    // int age=22;
    // int *ptr = &age;
    // int _age = *ptr;

    // printf("%p\n",&age);
    // printf("%u\n",&age);

    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",*pptr);
    printf("%d\n",**pptr);

    return 0;
}