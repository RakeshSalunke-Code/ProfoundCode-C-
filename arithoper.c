// to find the add, sub, mul, div and mod of two numbers

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("\n Enter the two numbers");
	scanf("%d%d",&a,&b);
	
	printf("\n Addition = %d",a + b);
	
	printf("\n Sub = %d",a - b);
	
	printf("\n mul = %d",a * b);
	
	printf("\n div = %d",(float)a / b);
	
	printf("\n mod = %d",a % b);
	
	return 0;
	
}
