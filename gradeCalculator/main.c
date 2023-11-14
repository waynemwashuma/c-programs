#include <stdio.h>

void exitSmooth(int error)
{
    if (error)
        getchar();
    char c;
    printf("\n\n\n...press enter to exit...");
    scanf("%c", &c);
}

int main (){
    float marks;
    printf("Enter the the marks gotten:");
    scanf("%f",&marks);

    if(marks <= 100 && marks >= 80){
        printf("Your grade : A");
    }else if(marks <= 79 && marks >= 70){
        printf("Your grade : B");
    }else if(marks <= 69 && marks >= 60){
        printf("Your grade : C");
    }else if(marks <= 59 && marks >= 40){
        printf("Your grade : D");
    }else if(marks <= 39){
        printf("Your grade : F");
    }else{
        printf("Invalid output");
    }

    exitSmooth(1); 
    return 0;
}