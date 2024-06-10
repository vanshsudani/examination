#include <stdio.h>

main()
{
	int n,count=0;
	
	printf("enter value N =");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n/=10;
		count++;
	}
	printf("Total number of digits:- %d\n",count);
}