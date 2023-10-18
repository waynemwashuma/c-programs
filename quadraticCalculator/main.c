#include <stdio.h>

int main (){
    float a,b,c,x;
    printf("To compute the quadratic equation (y = ax^2 +bx + c),\n");
    printf("\n\tEnter the value of a:");
    scanf("%f",&a);
    printf("\n\tEnter the constant of b:");
    scanf("%f",&b);
    printf("\n\tEnter the constant of c:");
    scanf("%f",&c);
    printf("\n\n");
    while(true){
        printf("\tEnter the value of x:");
        scanf("%f",&x);
        
        //the quadratic equation
        float y = (a * x * x ) + (b * x) + c;
        printf("\t\tThe value of y is:%f \n",y);
    }
    return 0;
}