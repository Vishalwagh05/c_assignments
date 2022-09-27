#include<stdio.h>
#define PI 3.14

float area(float);
float circum(float);

int main()
{
	float rad,Area,Circ;

	printf("Enter the radius: ");
	scanf("%f",&rad);

	Area=area(rad);
	Circ=circum(rad);
	
	printf("Area of a circle: %.2f\n Circumference of a circle:%.2f\n",Area,Circ);
}

float area (float rad)
{
	return (PI*rad*rad);
}

float circum(float rad)
{
	return (2*PI*rad);
}
