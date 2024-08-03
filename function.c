// #include <stdio.h>

// void printnamaste(); // function declaration
// void printbonjour();

// int main()
// {

//     char ch;
//     printf("Enter i for indian and f for french : ");
//     scanf("%c",&ch);

//     if (ch == 'i')
//     {
//         printnamaste(); // function call
//     }
//     else if (ch == 'f')
//     {
//         printbonjour();
//     }
//     else
//     {
//         printf("you entered wrong letter! ");
//     }
//     return 0;
// }

// void printnamaste()
// { // function definition
//     printf("Namaste! \n");
// }

// void printbonjour()
// {
//     printf("Bonjour!\n");
// }



// #include<stdio.h>

// void table(int n);

// int main(){
//     int  n;
//     printf("enter the number: ");
//     scanf("%d",&n);

//     table(n);

//     return 0;
// }
// void table(int n){
//     for(int i=1;i<=10;i++){
//         printf("%d \n",n*i);
//     }
// }


//AREA USING FUNCTION


#include<stdio.h>

float square(float side);
float circle(float r);
float rectangle(float l,float b);

int main(){
    float side,r,l,b;
    printf("enter side of square: ");
    scanf("%f",&side);
    printf("enter radius of circle : ");
    scanf("%f",&r);
    printf("enter length and breadth of rectangle: ");
    scanf("%f %f",&l,&b);

    printf("Area of square is: %f \n",square(side));
    printf("Area of circle is: %f \n",circle(r));
    printf("Area of rectangle is: %f \n",rectangle(l,b));
    return 0;
}

float square(float side){
    return side*side;
}

float circle(float r){
    return 3.14*r*r;
}

float rectangle(float l,float b){
    return l*b;
}