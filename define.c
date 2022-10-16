//to find the area and circumference of circle

#include<stdio.h>
#define pi 3.14

int main()
{
	int r;
	float area, cir;
	
	printf("\n Enter the any radius");
	scanf("%d",&r);
	
	area = pi*r*r;
	cir = 2*pi*r;
	
	printf("\n area of circle = %.2f circumference of circle = %.3f", area, cir);
	
	return 0;
}
