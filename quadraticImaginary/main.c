#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c;
    printf("To compute the quadratic equation (0 = ax^2 +bx + c),to check if roots are real.\n");
    
    printf("\n\tEnter the value of a:");
    scanf("%f",&a);

    printf("\n\tEnter the constant of b:");
    scanf("%f",&b);

    printf("\n\tEnter the constant of c:");
    scanf("%f",&c);

    float constant = sqrt(b*b - 4*a*c);
    float disriminant = b + constant;

    if(b >= 0){
        printf("the equation has real roots.\n");       
    }else{
        printf("the equation has imaginary roots.\n");
    }
    
    //find a better way to exit the process.
    printf("\n...press number and enter to exit...");
    scanf("%f",&c);
    return 0;
}