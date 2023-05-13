

//simple ineterest

#include<stdio.h>
int main(){
	
	float p,r,t,si;// variable to store value
	printf("enter the principle value\n");
	scanf("%f",&p);
	printf("enter the rate of interest\n");
	scanf("%f",&r);
	printf("enter the time period\n");
	scanf("%f",&t);
	
	si=(p*r*t)/100;//formula to find simple interest
	printf("the value of simple imterest %f\n",si);
	return 0;
}
