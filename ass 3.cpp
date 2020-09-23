#include<stdio.h>
int main ()
{
	int num;
	printf("enter your numbers");
	scanf("%d",&num);
	if(num>=85)
	{
		printf("grade is A");
		
	}
	else if (num>=70 && num <84)
	{
		printf("your grade is B");
	}
	else if ( num>=55 && num<69)
	{
		printf("your grade is C");
	}
	else if  ( num>=40 && num<54)
	{
		printf("your grade is D");
	}
	else if ( num < 40)
	{
		printf("your grade is F");
	}
	return 0;
}
