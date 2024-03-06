#include<stdio.h>

main()
{
	int x,y,cube_of_sum;
	
	printf("enter the x value number=");
	scanf("%d",&x);
	
	printf("enter the y value number=");
	scanf("%d",&y);
	
	sum_square=x*x*x+y*y*y+3*x*x*y+3*x*y*y;
	
	printf("the cube_of_sum of the sum %.2d and %.2d=%.2d\n",x,y,cube_of_sum);
}