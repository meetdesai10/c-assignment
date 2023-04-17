

//simple ineterest

#include<stdio.h>
int main(){
	
	float p,r,t,si;
	printf("enter the principle value\n");
	scanf("%f",&p);
	printf("enter the rate of interest\n");
	scanf("%f",&r);
	printf("enter the time period\n");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("the value of simple imterest %f\n",si);
	return 0;
}
