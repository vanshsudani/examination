#include<stdio.h>

main()
{
   int percentage;
   printf("Enter your percentage");
   scanf("%d",&percentage);
   
   (percentage<=100 && percentage>=90)?printf("Your Grade is A ")
	:(percentage<=89 && percentage>=80)?printf("Your Grade is B ")
	:(percentage<=79 && percentage>=70)?printf("Your Grade is C ")
	:(percentage<=69 && percentage>=60)?printf("Your Grade is D ")
	:(percentage<=59 && percentage>=40)?printf("Your Grade is E ")
	:(percentage<40)?printf("Your grade is FAIL")
	:printf("better luck is next time");
	
}