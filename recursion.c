/*  SUM OF N NATURAL NUMBERS

#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is : %d",sum(5));
    return 0;
}

int sum(int n){
    if(n == 1 ){
        return 1;
    }

    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}

*/



#include<stdio.h>

int fact(int n);

int main(){
    printf("factorial is : %d",fact(5));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }

    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}