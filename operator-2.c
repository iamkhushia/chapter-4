#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the value of a number=");
	scanf("%d",&a);
	
	printf("enter the value of b number=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swip,the value of a =%d\n",a);
	printf("after swip,the value of b =%d\n",b);
}

