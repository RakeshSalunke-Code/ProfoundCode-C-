#include<stdio.h>
int main()
{
	int a=9,b=3;
	
	a+=b;
	printf("\n a=%d",a);		//12
	
	b*=a;
	printf("\n b=%d",b);		//36
	
	b-=a;
	printf("\n b=%d",b);		//24
	
	return 0;
	
}
