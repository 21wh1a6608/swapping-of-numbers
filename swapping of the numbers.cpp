#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped values are %d,%d",a,b);
}
