// convert year to day and day to year



#include<stdio.h>
int main()
{
	int num;
	float ans,i;
	
	 printf("press 1. convert years in
	 to days\n");
	 printf("press 2. convert days into years\n");
	 scanf("%d",&num);
	 
	 if(num==1)
	 {
	 printf("enter the number of years:\n");
	 scanf("%f",&i);
	 
	 ans=i*365;
	 printf("%f year is equal to %f",i,ans);
     }
	 else if(num==2)
	 {
	 printf("enter the number of days:\n");
	 scanf("%f",&i);
	 
	 ans=i/365;
	 printf("%f days are equal to %f",i,ans);
     }
     return 0;
     
	 
}
