#include<stdio.h>// pre processor
int main()
{
	int year;//variables to store value
	printf("enter a year");
	scanf("%d",&year);
	
	if (year%4==0)// formula 
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	return 0;
}

