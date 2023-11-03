#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float number;
	
	printf("Enter a number:");
	scanf("%f",&number);
	
	//if(number % 2  == 0){
	if(floorf(number / 2) == 1){
	    printf("It is even");
	}else{
	    printf("It is odd");
	}
	return 0;
}