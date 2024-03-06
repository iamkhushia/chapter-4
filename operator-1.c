#include<stdio.h>

main()
{
	int x,y,a;
	
	printf("enter value no x");
	scanf("%d",&x);
	
	printf("enter value no y");
	scanf("%d",&y);
	
	a=x;
	x=y;
	y=a;
	
	printf("\nvalue of x is =%d",x);
	printf("\nvalue of y is =%d",y);
}