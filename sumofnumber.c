#include<stdio.h>

int main(){
    int num;
    printf("Enter numbers you want to sum of: ");
    scanf("%d",&num);

    int sum=0;

    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("sum is: %d",sum);
    
    return 0;
}