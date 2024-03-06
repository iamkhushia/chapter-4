#include<stdio.h>

main()
{
	int x,y,sum_square;
	
	printf("enter the x value number=");
	scanf("%d",&x);
	
	printf("enter the y value number=");
	scanf("%d",&y);
	
	sum_square=x*x+y*y+2*x*y;
	
	printf("the square of the sum %.2d and %.2d=%.2d\n",x,y,sum_square);
}