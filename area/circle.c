#include <stdio.h>


const float PI = 3.14257;

float area(float r);
float circumference(float r);

int main(int argc, char *argv[])
{
	float radius;
	printf("Enter the radius of the circle");
	scanf("%f",&radius);
	
	
	printf(
		"Area of circle is : %.2f cm \n",
		area(radius)
	);
	printf(
		"Circumference of circle is : %.2f cm",
		circumference(radius)
	);
	return 0;
}
float area(float r){
    return PI * r * r;
}
float circumference(float r){
    return PI * r * 2;
}