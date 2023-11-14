#include <stdio.h>


float area(float base,float height);
    
int main()
{
	float base,height;
	printf("Enter the base of rhe triangle");
	scanf("%f",&base);
	printf("Enter the height of rhe triangle");
	scanf("%f",&height);;
	
	printf(
		"Area of thraingle is : %.2f cm",
		area(base,height)
	);
	return 0;
}

float area(float base,float height){
    return 0.5 * base * height;
}
