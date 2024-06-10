#include<stdio.h>

main()
{
	const float triangle = 0.5;
	float b,h,ar;

	printf("enter your value b =");
	scanf("%f",&b);
	
	printf("enter your value h =");
	scanf("%f",&h);
	
	ar =triangle * b * h;
	printf("Ar =%.2f",ar);
}
