#include <stdio.h>

int main (){
    int year;
    while(true){
        printf("\nEnter a year:");
        scanf("%d",&year);
        if((year % 4) == 0){
            printf("the year %d is a leap year!",year);
        }else{
            printf("the year %d is not a leap year!",year);
        }
    }
    return 0;
}