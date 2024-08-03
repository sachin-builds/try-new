#include<stdio.h>
#include<math.h>

int power(int x,int y);

int main(){
    printf("power is : %d",power(7,4));
    return 0;
}

int power(int x,int y){
    if(x==0 || y==0){
        return 0;
    }
    
    int power = pow(x,y);
}


wrong